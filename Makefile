# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 22:28:43 by pyasuko           #+#    #+#              #
#    Updated: 2020/11/13 13:34:30 by pyasuko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memcmp.c\
	ft_memchr.c\
	ft_memmove.c\
	ft_strlen.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strmapi.c\
	ft_itoa.c\
	ft_split.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJ = ${SRC:.c=.o}
BOBJ = ${BONUS:.c=.o}
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
NORM = norminette

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}:	${OBJ}
			ar rc ${NAME} ${OBJ} libft.h
			ranlib ${NAME}

bonus:		${OBJ} ${BOBJ}
			ar rc ${NAME} ${OBJ} ${BOBJ} libft.h
			ranlib ${NAME}

clean:
			rm -rf ${OBJ} ${BOBJ}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

norme:
			${NORM} ${SRC}
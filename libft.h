/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:03:23 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/11 11:56:58 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

void				*ft_memset(void *dst, int c, size_t len);

void				ft_bzero(void *s, size_t len);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t len);

size_t				ft_strlcpy(char *buf, const char *src, size_t size);

size_t				ft_strlen(const char *str);

size_t				ft_strlcpy(char *buf, const char *src, size_t size);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strnstr(const char *h, const char *n, size_t len);

int					ft_atoi(const char *str);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_toupper(int c);

int					ft_tolower(int c);

void				*ft_calloc(size_t count, size_t size);

char				*ft_strdup(const char *s1);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

#endif

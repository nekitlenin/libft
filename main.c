//FILES
	// #include "libft.h"
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
	#include "ft_strlen.c"
	#include "ft_atoi.c"
	#include "ft_isalpha.c"
	#include "ft_isdigit.c"
	#include "ft_isalnum.c"
	#include "ft_isascii.c"
	#include "ft_isprint.c"
	#include "ft_toupper.c"
	#include "ft_tolower.c"
	#include "ft_strlcpy.c"
	#include "ft_strlcat.c"
	#include "ft_strchr.c"
	#include "ft_strrchr.c"
	// #include "ft_strnstr.c"
	// #include "ft_strncmp.c"
	#include "ft_memset.c"
	#include "ft_bzero.c"
	#include "ft_memcpy.c"
	// #include "ft_memccpy.c"
	// #include "ft_memmove.c"
	// #include "ft_memchr.c"
	// #include "ft_memcmp.c"
	#include "ft_strdup.c"

int	main()
{/* MEMSET */
	printf("-------------------\n");
	printf("MEMSET\n");
	printf("-------------------\n");
	unsigned char srcmem[15]= "1234567890";
	printf("test:\n");
	printf("src_before: %s\n", srcmem);
	// Заполняем массив символом ‘1’
	memset(srcmem, '1', 5);
	// Вывод массива src на консоль
	printf("src: %s\n", srcmem);
	printf("my:\n");
	unsigned char srcmem0[15]= "1234567890";
	printf("src_before: %s\n", srcmem0);
	ft_memset(srcmem0, '1', 5);
	printf("src: %s\n", srcmem0);
/* BZERO */
	printf("-------------------\n");
	printf("BZERO\n");
	printf("-------------------\n");
	unsigned char srcb[15]= "1234567890";
	printf("test:\n");
	printf("src_before: %s\n", srcb);
	// Заполняем массив символом ‘1’
	bzero(srcb, 5);
	// Вывод массива src на консоль
	printf("src: %s\n", srcb);
	printf("my:\n");
	unsigned char srcb0[15]= "1234567890";
	printf("src_before: %s\n", srcb0);
	ft_bzero(srcb0, 5);
	printf("src: %s\n", srcb0);
/* MEMCPY */
	printf("-------------------\n");
	printf("MEMCPY\n");
	printf("-------------------\n");
	// Массив источник данных
   unsigned char srccpy[10] = "123456";
   // Массив приемник данных
   unsigned char dstcpy[10] = "";
   // Копируем 6 байт из массива src в массив dst
   memcpy (dstcpy, srccpy, 6);
   // Вывод массива dst на консоль
   printf ("dst: %s\n", dstcpy);

   unsigned char srccpy1[10] = "123456";
   unsigned char dstcpy1[10] = "";
   ft_memcpy (dstcpy1, srccpy1, 6);
   printf ("dst: %s\n", dstcpy1);
//MEMCCPY
	// int x = 6;
	// printf("-------------------\n");
	// printf("MEMCCPY\n");
	// printf("-------------------\n");
	// printf("test: %s\n", x);
	// printf("func: %s\n", memccpy(x));
	// printf("my:   %s\n", ft_memccpy(x));
//MEMMOVE
	// int x = 6;
	// printf("-------------------\n");
	// printf("MEMMOVE\n");
	// printf("-------------------\n");
	// printf("test: %s\n", x);
	// printf("func: %s\n", memmove(x));
	// printf("my:   %s\n", ft_memmove(x));
//MEMCHR
	// int x = 6;
	// printf("-------------------\n");
	// printf("MEMCHR\n");
	// printf("-------------------\n");
	// printf("test: %s\n", x);
	// printf("func: %s\n", memchr(x));
	// printf("my:   %s\n", ft_memchr(x));
//MEMCMP
	// int x = 6;
	// printf("-------------------\n");
	// printf("MEMCMP\n");
	// printf("-------------------\n");
	// printf("test: %s\n", x);
	// printf("func: %s\n", memcmp(x));
	// printf("my:   %s\n", ft_memcmp(x));
/* ISALPHA */
	int x = 6;
	printf("-------------------\n");
	printf("ISALPHA\n");
	printf("-------------------\n");
	printf("test: %d\n", x);
	printf("func: %d\n", isalpha(x));
	printf("my:   %d\n", ft_isalpha(x));
/* ISDIGIT */
	int x1 = 6;
	printf("-------------------\n");
	printf("ISDIGIT\n");
	printf("-------------------\n");
	printf("test: %d\n", x);
	printf("func: %d\n", isdigit(x1));
	printf("my:   %d\n", ft_isdigit(x1));
/* ISALNUM */
	int x2 = 6;
	printf("-------------------\n");
	printf("ISALNUM\n");
	printf("-------------------\n");
	printf("test: %d\n", x);
	printf("func: %d\n", isalnum(x2));
	printf("my:   %d\n", ft_isalnum(x2));
/* ISASCII */
	int x3 = 6;
	printf("-------------------\n");
	printf("ISASCII\n");
	printf("-------------------\n");
	printf("test: %d\n", x);
	printf("func: %d\n", isascii(x3));
	printf("my:   %d\n", ft_isascii(x3));
/* ISPRINT */
	int x4 = 6;
	printf("-------------------\n");
	printf("ISPRINT\n");
	printf("-------------------\n");
	printf("test: %d\n", x4);
	printf("func: %d\n", isprint(x4));
	printf("my:   %d\n", ft_isprint(x4));
/* TOUPPER */
	int x5 = 122;
	printf("-------------------\n");
	printf("TOUPPER\n");
	printf("-------------------\n");
	printf("test: %d\n", x5);
	printf("func: %d\n", toupper(x5));
	printf("my:   %d\n", ft_toupper(x5));
/* TOLOWER */
	int x6 = 90;
	printf("-------------------\n");
	printf("TOLOWER\n");
	printf("-------------------\n");
	printf("test: %d\n", x6);
	printf("func: %d\n", tolower(x6));
	printf("my:   %d\n", ft_tolower(x6));
/* ATOI */
	char *str = " -123a4";
	printf("-------------------\n");
	printf("ATOI\n");
	printf("-------------------\n");
	printf("test: %s\n", str);
	printf("func: %d\n", atoi(str));
	printf("my:   %d\n", ft_atoi(str));
/* STRLEN */
	char *str2 = "hello world!";
	printf("-------------------\n");
	printf("STRLEN\n");
	printf("-------------------\n");
	printf("test: %s\n", str2);
	printf("func: %zu\n", strlen(str2));
	printf("my:   %zu\n", ft_strlen(str2));
/* STRLCPY */
	char buf[] = "1234567890";
	char str00[] = "abcdefg";
	size_t sz;
	printf("-------------------\n");
	printf("STRLCPY\n");
	printf("-------------------\n");
    printf("buf:		");
    for (int j = 0; j < 10; j++)
        printf("%c", buf[j]);
    sz = strlcpy(buf, str00, 5);
    printf("\nbuf_after:	");
    for (int j = 0; j < 10; j++)
        printf("%c", buf[j]);
	printf("\nsz:		%zu\n", sz);
	printf("\nft_\n");
	char buf1[]  = "1234567890";
	char str1[] = "abcdefg";
	size_t sz1;
    printf("buf1:		");
    for (int j = 0; j < 10; j++)
        printf("%c", buf1[j]);
    sz1 = ft_strlcpy(buf1, str1, 5);
    printf("\nbuf_after:	");
    for (int j = 0; j < 10; j++)
        printf("%c", buf1[j]);
	printf("\nsz:		%zu\n", sz1);
/* STRLCAT */
	printf("-------------------\n");
	printf("STRLCAT\n");
	printf("-------------------\n");
	char dst[] = "PRIVET";
    char src[] = "zdravstvuyte";
    int r;
    int size = 12;
    char buffer[size];

    strcpy(buffer,dst);
    r = strlcat(buffer,src,size);

	 printf("buf_after: %s\n",buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");
	//my:
	printf("my:\n");
	char dst9[] = "PRIVET";
    char src9[] = "zdravstvuyte";
    int r9;
    int size9 = 12;
    char buffer9[size9];

    strcpy(buffer9,dst9);
    r9 = ft_strlcat(buffer9,src9,size9);

	 printf("buf_after: %s\n",buffer9);
    printf("Value returned: %d\n",r9);
    if( r9 > size9 )
        puts("String truncated");
    else
        puts("String was fully copied");
/* STRCHR */
	const char *s = "\0";
	int c = '\0';
	printf("-------------------\n");
	printf("STRCHR\n");
	printf("-------------------\n");
	printf("test: %s\n", s);
	printf("func: %s\n", strchr(s, c));
	printf("my:   %s\n", ft_strchr(s, c));
/* STRRCHR */
	const char *s1 = "Hello World!";
	int c1 = 'o';
	printf("-------------------\n");
	printf("STRRCHR\n");
	printf("-------------------\n");
	printf("test: %s\n", s1);
	printf("func: %s\n", strrchr(s1, c1));
	printf("my:   %s\n", ft_strrchr(s1, c1));
//STRNSTR
	// char *str2 = "hello world!";
	// printf("-------------------\n");
	// printf("STRNSTR\n");
	// printf("-------------------\n");
	// printf("test: %s\n", str2);
	// printf("func: %lu\n", strnstr(str2));
	// printf("my:   %d\n", ft_strnstr(str2));
//STRNCMP
	// char *str2 = "hello world!";
	// printf("-------------------\n");
	// printf("STRNCMP\n");
	// printf("-------------------\n");
	// printf("test: %s\n", str2);
	// printf("func: %lu\n", strncmp(str2));
	// printf("my:   %d\n", ft_strncmp(str2));
/* STRDUP */
	printf("-------------------\n");
	printf("STRDUP\n");
	printf("-------------------\n");
					// Исходная строка
   char strd [11]="0123456789";
   					// Переменная, в которую будет помещен указатель на дубликат строки
   char *istr;
   char *my;
   					// Дублирование строки
   istr = strdup (strd);
   my = ft_strdup (strd);
   					// Вывод дубликата на консоль
   printf ("Дубликат: %s\n", istr);
   printf ("My dубликат: %s\n", my);
   					// Очищаем память, выделенную под дубликат
   free (istr);
   free (my);
	return (0);
}
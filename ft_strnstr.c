/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:08:06 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/11 15:05:48 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	// size_t			nlen;
	// size_t			i;

	// i = 0;
	// nlen = ft_strlen(n);
	// if (!n[i])
	// 	return ((char *)h);
	// while (h[i] && i < len - nlen !=)
	// {
	// 	if (h[i] == n[i] && ft_memcmp(h, n, nlen) == 0)
	// 		return ((char *)(h + i);
	// 	i++;
	// }
	// return (NULL);
	size_t i;
 	size_t q;

 	if (n[0] == '\0')
 	 return ((char *)h);
 	i = 0;
 	while (h[i] && i < len != '\0')
 	{
 		q = 0;
 		while (n[q] != '\0')
 		{
			if (i + q >= len || h[i + q] != n[q])
 				break ;
				// return (0);
 			q++;
 		}
 		if (n[q] == '\0')
 			return ((char *)(h + i));
 		i++;
	}
 	return (NULL);
}

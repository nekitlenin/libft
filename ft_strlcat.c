/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:09:23 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/09 16:22:16 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	dlen;
	size_t	slen;

	i = 0;
	k = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (slen + size);
	while (dst[i] && i < size - 1)
		i++;
	while (src[k] && i < size - 1)
	{
		dst[i] = src[k];
		k++;
		i++;
	}
	dst[i] = '\0';
	return (dlen + slen);
}

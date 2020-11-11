/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:17:10 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/09 16:22:14 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *buf, const char *src, size_t size)
{
	unsigned int	i;
	size_t			len;

	len = 0;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (buf == '\0' || src == '\0' || size == 0)
		return (0);
	while (src[len] != '\0')
		len++;
	while (src[i] != '\0' && i < size - 1)
	{
		buf[i] = src[i];
		i++;
	}
	buf[i] = '\0';
	return (len);
}

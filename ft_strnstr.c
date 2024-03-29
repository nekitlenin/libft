/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:08:06 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/12 11:55:10 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;
	size_t q;

	i = 0;
	if (n[i] == '\0')
		return ((char *)h);
	while (h[i] && i < len != '\0')
	{
		q = 0;
		while (n[q] != '\0')
		{
			if (i + q >= len || h[i + q] != n[q])
				break ;
			q++;
		}
		if (n[q] == '\0')
			return ((char *)(h + i));
		i++;
	}
	return (NULL);
}

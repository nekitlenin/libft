/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:08:06 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/11 11:57:27 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t			nlen;
	int				i;

	i = 0;
	nlen = ft_strlen(n);
	if (!n[i])
		return ((char *)h);
	// while (h[i] && len-- >= nlen)
	while (i <= (int)(len - nlen))
	{
		if (h[i] == n[i] && ft_memcmp(h, n, nlen) == 0)
			// return (0);
			return ((char *)h);
		i++;
	}
	return (NULL);
}

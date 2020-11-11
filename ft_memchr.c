/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:00:51 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/09 20:09:55 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ps;
	size_t				i;

	i = 0;
	ps = s;
	if (n)
	{
		while (n > 0)
		{
			if (ps[i++] == (unsigned char)c)
				return ((void *)(&ps[i - 1]));
			n--;
		}
	}
	return (NULL);
}

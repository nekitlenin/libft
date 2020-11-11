/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:30:54 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/09 16:22:12 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)dst;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (dst);
}

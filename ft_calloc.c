/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:16:39 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/11 11:17:56 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned	n;
	void		*nl;

	n = count * size;
	nl = malloc(n);
	if (nl)
		ft_memset(nl, 0, n);
	return (nl);
}

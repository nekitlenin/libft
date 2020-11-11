/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:43:59 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/09 16:22:17 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*p;

	i = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] == c)
			p = (char *)&s[i];
		i++;
	}
	if (!s[i] && !c)
		return ((char *)&s[i]);
	return (p);
}

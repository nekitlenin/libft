/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:28:49 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/11 14:23:15 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_twentyfive(long n)
{
	int l;

	l = 0;
	if (n < 0)
	{
		n = n * (-1);
		l++;
	}
	while (n > 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char		*ft_itoa(int n)
{
	char			*str;
	long			nu;
	unsigned int	i;

	nu = n;
	i = ft_twentyfive(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nu == 0)
		str[0] = 48;
	if (nu < 0)
	{
		str[0] = '-';
		nu = nu * (-1);
	}
	while (nu > 0)
	{
		str[i] = 48 + (nu % 10);
		nu = nu / 10;
		i--;
	}
	return (str);
}

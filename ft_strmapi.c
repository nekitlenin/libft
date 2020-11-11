/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:14:31 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/11 15:16:56 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int n;
	char   *dest;

	n = 0;
	if (!s)
		return (NULL);
	if (!(dest = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (NULL);
	while (s[n])
	{
		dest[n] = (*f)(n, (char)s[n]);
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

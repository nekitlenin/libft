/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:26:42 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/14 15:27:21 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t			len;
	char			*res;

	len = ft_strlen(s1);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	else
		ft_strlcpy(res, s1, len + 1);
	return (res);
}

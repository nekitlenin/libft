/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyasuko <pyasuko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:26:42 by pyasuko           #+#    #+#             */
/*   Updated: 2020/11/09 19:03:58 by pyasuko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t			len;
	char			*res;

	len = ft_strlen(s1) + 1;
	res = malloc(len);
	if (!res)
		return (NULL);
	else
		ft_strlcpy(res, s1, len);
	res[len] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 17:36:20 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/21 23:56:35 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *location;

	if (!s)
		return (NULL);
	location = NULL;
	while (*s != '\0')
		if (*s++ == (char)c)
			location = (char *)s - 1;
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)location);
}

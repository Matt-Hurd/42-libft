/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 09:34:50 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/21 22:07:22 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *strsrc;
	char *strdst;

	strsrc = (char *)src;
	strdst = (char *)dst;
	while (n--)
	{
		*strdst = *strsrc;
		strdst++;
		if (*strsrc == (char)c)
			return ((void *)strdst);
		strsrc++;
	}
	return (NULL);
}

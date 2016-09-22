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

	if (!dst || !src)
		return (NULL);
	strsrc = (char *)src;
	strdst = (char *)dst;
	while (n > 0 && *strsrc != c)
	{
		n--;
		*strdst++ = *strsrc++;
	}
	if (n)
		return ((void *)(strdst + 1));
	else
		return (0);
}

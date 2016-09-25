/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 11:14:02 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/21 21:54:24 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ret;
	size_t	x;

	x = -1;
	ret = dest;
	while (++x < n)
	{
		if (*(src))
			*(dest++) = *(src++);
		else
			*(dest++) = 0;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:11:40 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/21 22:30:58 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	index2;

	if (!*little)
		return ((char *)big);
	index2 = 0;
	while (big[index2])
	{
		index = 0;
		while (big[index2 + index] == little[index] && index2 + index < len)
			if (!little[++index])
				return ((char *)(big + index2));
		index2++;
	}
	return (0);
}

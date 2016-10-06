/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 17:37:32 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/21 22:29:34 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	index;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		index = 0;
		while (big[index] == little[index])
			if (!little[++index])
				return ((char *)big);
		big++;
	}
	return (0);
}

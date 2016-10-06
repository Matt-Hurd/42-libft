/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 22:04:24 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/22 23:26:34 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Makes sure src is valid
** if newsize < srcsize, src is truncated
*/

void	*ft_realloc(void *src, size_t srcsize, size_t newsize)
{
	void *ret;

	if (!src)
		return (NULL);
	ret = ft_memalloc(newsize);
	ft_memcpy(ret, src, MIN(srcsize, newsize));
	free(src);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:47:47 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/22 00:18:53 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		x;

	if (!s || !f)
		return (NULL);
	ret = strdup(s);
	x = -1;
	while (*(ret + (++x)))
		ret[x] = f(x, ret[x]);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 16:23:53 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/26 16:53:04 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcjoin(char *delim, char **arr, size_t size)
{
	char	*buffer;
	size_t	x;
	int		len;
	int		del_len;

	if (!arr || !*arr)
		return (NULL);
	len = 0;
	x = -1;
	del_len = ft_strlen(delim);
	while (++x < size)
		len += ft_strlen(arr[x]) + del_len;
	buffer = (char *)ft_memalloc(len);
	x = -1;
	while (++x < size)
	{
		if (x > 0)
			ft_strcat(buffer, delim);
		ft_strcat(buffer, arr[x]);
	}
	return (buffer);
}

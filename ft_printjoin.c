/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <mhurd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 16:50:56 by mhurd             #+#    #+#             */
/*   Updated: 2016/09/26 16:55:35 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printjoin(char *delim, char **arr, size_t size)
{
	if (!arr || !*arr)
		return ;
	while (size--)
	{
		ft_putstr(*arr++);
		if (size >= 1)
			ft_putstr(delim);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:49:05 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/12 16:02:33 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmps;
	unsigned char	*src;
	size_t			i;

	i = 0;
	tmps = (unsigned char *)src;
	tmpd = (unsigned char *)dst;
	while (i < len)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return (dst);
}

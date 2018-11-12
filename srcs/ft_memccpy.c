/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:29:27 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/12 17:40:50 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;
	size_t			i;

	i = 0;
	tmpd = (unsigned char *)dst;
	tmps = (unsigned char *)src;
	while (i < n)
	{
		tmpd[i] = tmps[i];
		if (tmps[i] == (unsigned char)c)
			return ((void *)&tmpd[i + 1]);
		i++;
	}
	return (NULL);
}

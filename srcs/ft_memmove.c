/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:49:05 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/16 14:32:32 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmps;
	unsigned char	*tmpd;
	size_t			i;

	i = 0;
	tmps = (unsigned char *)src;
	tmpd = (unsigned char *)dst;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i)
		{
			tmpd[i - 1] = tmps[i - 1];
			i--;
		}
	}
	return (dst);
}

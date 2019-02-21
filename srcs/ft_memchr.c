/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:12:32 by alfiumic          #+#    #+#             */
/*   Updated: 2019/02/20 15:27:26 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmps;
	unsigned char	chr;
	size_t			i;

	i = 0;
	tmps = (unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (tmps[i] == chr)
			return (&tmps[i]);
		i++;
	}
	return (NULL);
}

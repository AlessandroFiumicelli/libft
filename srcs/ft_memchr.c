/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:12:32 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:13:12 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

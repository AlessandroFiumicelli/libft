/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:38:01 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/12 16:53:00 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h";

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmps1;
	unsigned char	*tmps2;
	size_t			i;

	i = 0;
	tmps1 = (unsigned char *)s1;
	tmps2 = (unsigned char *)s2;
	while (tmps1[i] == tmps2[i] && i < n)
		i++;
	return (tmps1[i] - tmps2[i]);
}

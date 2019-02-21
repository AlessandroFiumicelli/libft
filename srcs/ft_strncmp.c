/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:04:23 by alfiumic          #+#    #+#             */
/*   Updated: 2019/02/20 15:46:09 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (0);
	while ((s1[len] || s2[len]) && len < n)
	{
		if (s1[len] != s2[len])
			return (*((unsigned char*)s1 + len) - *((unsigned char*)s2 + len));
		len++;
	}
	return (0);
}

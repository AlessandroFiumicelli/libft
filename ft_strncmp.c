/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:04:23 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:31:38 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while ((s1[len] || s2[len]) && s1[len] == s2[len] && len < n)
		len++;
	return (*((unsigned char *)s1 + len) - *((unsigned char *)s2 + len));
}

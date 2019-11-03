/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_strlen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:33:58 by alfiumic          #+#    #+#             */
/*   Updated: 2019/02/20 15:16:17 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t		ft_custom_strlen(const char *s)
{
	size_t		size;

	if (!s)
		return (0);
	size = 0;
	while (s[size])
		size++;
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:37:46 by alfiumic          #+#    #+#             */
/*   Updated: 2019/02/20 15:24:40 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_lstlen(t_list *alst)
{
	size_t		size;

	if (alst == NULL)
		return (0);
	size = 0;
	while (alst)
	{
		alst = alst->next;
		size++;
	}
	return (size);
}

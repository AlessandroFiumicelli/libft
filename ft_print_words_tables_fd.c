/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables_fd.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:48:13 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/20 14:50:37 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_words_tables_fd(char **tab, int fd)
{
	size_t	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_putstr_fd(tab[i], fd);
			ft_putchar_fd('\n', fd);
			i++;
		}
	}
}

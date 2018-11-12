/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:29:59 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/12 15:49:22 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

int		main(void)
{
	char	dst[10] = "Ciao";

	printf("%s\n", memmove(dst, "Hello", 4));
	printf("%s\n", memmove(dst, "Cdkaj", 4));
	printf("%s\n", memmove(dst, "Ciao", 4));
	printf("%s\n", memmove(dst, "slko", 4));
	return (0);
}

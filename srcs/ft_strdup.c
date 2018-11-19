/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:20:31 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:26:56 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		size_s1;
	char		*dup;

	size_s1 = ft_strlen(s1);
	if (!(dup = (char *)malloc(sizeof(char) * (size_s1) + 1)))
		return (NULL);
	return (ft_strcpy(dup, s1));
}

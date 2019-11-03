/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:13:42 by alfiumic          #+#    #+#             */
/*   Updated: 2019/02/20 15:40:58 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 && !s2)
		return (NULL);
	len = ft_custom_strlen(s1) + ft_custom_strlen(s2);
	if (!(str = ft_memalloc(len + 1)))
		return (NULL);
	str = ft_custom_strcpy(str, s1);
	str = ft_custom_strcat(str, s2);
	if (!str)
		return (NULL);
	else
		return (str);
}

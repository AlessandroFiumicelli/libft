/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:14:21 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:31:00 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			i;
	size_t			len;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (s[i])
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}

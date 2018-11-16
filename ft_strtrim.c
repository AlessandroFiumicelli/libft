/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:17:18 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:35:05 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whites(char const *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		if (str[len] != ' ' && str[len] != '\n' && str[len] != '\t')
			return (0);
		len++;
	}
	return (1);
}

char	*ft_strtrim(char const *s)
{
	char					*str;
	unsigned int	start;
	size_t				len;

	if (!s)
		return (NULL);
	start = 0;
	len = ft_strlen(s) - 1;
	if (is_whites(s))
	{
		str = ft_memalloc(1);
		return (str);
	}
	while (s[start] == 32 || s[start] == '\t' || s[start] == '\n')
		start++;
	while (s[len] == 32 || s[len] == '\t' || s[len] == '\n')
		len--;
	if (!(str = ft_strsub(s, start, len - start + 1)))
		return (NULL);
	return (str);
}

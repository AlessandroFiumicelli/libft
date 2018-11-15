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

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	start;
	size_t			len;

	start = 0;
	len = ft_strlen(s);
	while (s[start] == 32 || s[start] == '\t' || s[start] == '\n')
		start++;
	if (s[len - 1] == 32 || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[len] == 32 || s[len] == '\t' || s[len] == '\n')
		len--;
	if (!(str = ft_strsub(s, start, len)))
		return (NULL);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:26:58 by alfiumic          #+#    #+#             */
/*   Updated: 2019/02/20 15:48:35 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	h_len;
	size_t	n_len;
	size_t	tmph_len;

	h_len = 0;
	if (needle[h_len] == '\0')
		return ((char *)haystack);
	while (haystack[h_len])
	{
		n_len = 0;
		tmph_len = h_len;
		while (haystack[h_len] == needle[n_len])
		{
			h_len++;
			n_len++;
			if (needle[n_len] == '\0')
				return ((char *)&haystack[tmph_len]);
		}
		h_len = tmph_len;
		h_len++;
	}
	return (NULL);
}

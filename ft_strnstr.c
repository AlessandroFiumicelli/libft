/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:59:05 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:33:18 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_len;
	size_t	n_len;
	size_t	tmph_len;

	h_len = 0;
	if (needle[h_len] == '\0')
		return ((char *)haystack);
	while (haystack[h_len] && h_len < len)
	{
		n_len = 0;
		tmph_len = h_len;
		while (haystack[h_len] == needle[n_len] && h_len < len)
		{
			h_len++;
			n_len++;
			if (needle[n_len] == '\0')
				return ((char *)&haystack[tmph_len]);
		}
		h_len++;
	}
	return (NULL);
}

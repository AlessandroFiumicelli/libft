/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:04:02 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:29:03 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	dlen;
	size_t	slen;

	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dst, size);
	if (dstlen == size)
		return (size + srclen);
	dlen = dstlen;
	slen = 0;
	while (slen < size - dstlen - 1 && src[slen])
	{
		dst[dlen] = src[slen];
		dlen++;
		slen++;
	}
	dst[dlen] = '\0';
	return (dstlen + srclen);
}
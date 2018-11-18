/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:04:23 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:31:38 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (0);
	while ((s1[len] || s2[len]) && s1[len] == s2[len] && len < n)
		len++;
	if (len == n && (!s1[len] || !s2[len]))
		return (0);
	return (*((unsigned char *)s1 + len) - *((unsigned char *)s2 + len));
}
int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abcde", 3));
	printf("%d\n", strncmp("abc", "abcde", 3));
	printf("%d\n", ft_strncmp("q", "a", 0));
	printf("%d\n", strncmp("q", "a", 0));
	return (0);
}

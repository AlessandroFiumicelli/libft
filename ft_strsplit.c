/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:16:27 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/15 17:39:02 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_word(char const *str, char c)
{
	int		cnt;
	int		num;

	cnt = 0;
	num = 0;
	if (!str && !str[cnt + 1])
		return (0);
	while (str[cnt] || str[cnt + 1])
	{
		if (cnt == 0 && str[cnt] != c)
			num++;
		else if (str[cnt] != c && str[cnt - 1] == c)
			num++;
		cnt++;
	}
	return (num);
}

static int		ft_custom_strlen(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (s[cnt] != c)
		cnt++;
	return (cnt);
}

char			**ft_strsplit(char const *s, char c)
{
	int		cnt;
	int		ind;
	int		num;
	int		len;
	char	**matrix;

	ind = 0;
	num = ft_count_word(s, c);
	if (!(matrix = (char **)malloc(sizeof(char *) * num + 1)))
		return (0);
	cnt = 0;
	while (ind < num)
	{
		while (s[cnt] && s[cnt] == c)
			cnt++;
		len = ft_custom_strlen(&s[cnt], c);
		if (!(matrix[ind] = (char*)malloc(sizeof(char) * len + 1)))
			return (0);
		matrix[ind] = ft_strncpy(matrix[ind], &s[cnt], len);
		ind++;
		cnt += len;
	}
	matrix[ind] = NULL;
	return (matrix);
}

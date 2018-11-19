/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:08:46 by alfiumic          #+#    #+#             */
/*   Updated: 2018/11/19 13:08:22 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char		*ft_makestr(char *str, size_t size, long int conv, int neg)
{
	size_t	tmpsize;

	tmpsize = size - 1;
	if (conv == 0)
		str[0] = '0';
	else
	{
		while (conv > 0)
		{
			if (neg)
				str[0] = '-';
			str[tmpsize] = (char)((conv % 10) + 48);
			conv = conv / 10;
			tmpsize--;
		}
	}
	return (str);
}

static size_t	get_size(long int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
	{
		size++;
		return (size);
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		size;
	long int	conv;
	int			neg;

	neg = 0;
	size = 0;
	conv = (long int)n;
	if (n < 0)
	{
		conv = -conv;
		size = (size_t)get_size(conv);
		size++;
		neg = 1;
	}
	else
		size = get_size(conv);
	if (!(str = ft_memalloc(size + 1)))
		return (NULL);
	str = ft_makestr(str, size, conv, neg);
	return (str);
}

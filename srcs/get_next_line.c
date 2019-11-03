/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 14:30:38 by alfiumic          #+#    #+#             */
/*   Updated: 2019/04/09 16:04:31 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int				ft_buff_alloc(t_reader *rdr)
{
	char	*tmp;

	if (!(tmp = (char*)malloc(rdr->r_size + BUFF_SIZE)))
		return (0);
	ft_memcpy(tmp, rdr->buffer, rdr->r_size);
	rdr->b_size = rdr->r_size + BUFF_SIZE;
	ft_memdel((void**)&rdr->buffer);
	rdr->buffer = tmp;
	return (1);
}

static int				ft_reading(const int fd, t_reader *rdr)
{
	int		cnt;

	cnt = 0;
	if ((rdr->b_size - rdr->r_size) < BUFF_SIZE)
		if (!ft_buff_alloc(rdr))
			return (-1);
	cnt = read(fd, rdr->buffer + rdr->r_size, BUFF_SIZE);
	if (cnt == 0)
		rdr->stop = 1;
	else if (cnt < 0)
		return (-1);
	rdr->r_size += cnt;
	return (1);
}

static void				ft_reset_buff(t_reader *rdr)
{
	int		piecesize;
	int		fd;

	if (rdr->r_size == 0 && rdr->stop == 1)
	{
		fd = rdr->fd;
		if (rdr->buffer)
			free(rdr->buffer);
		ft_memset((void*)rdr, 0, sizeof(t_reader));
		rdr->fd = fd;
		return ;
	}
	if (!rdr->buffer)
		return ;
	if (rdr->el < rdr->buffer || rdr->el > rdr->buffer + rdr->r_size)
	{
		rdr->el = 0;
		return ;
	}
	piecesize = (rdr->buffer + rdr->r_size) - (rdr->el);
	piecesize -= (rdr->stop) ? 0 : 1;
	ft_memmove(rdr->buffer, rdr->el + 1, piecesize);
	rdr->r_size = piecesize;
}

static t_reader			*ft_get_file_manager(int fd, t_list **multilist)
{
	t_reader	*tmp;
	t_list		*cur;

	cur = *multilist;
	while (cur)
	{
		tmp = (t_reader*)cur->content;
		if (tmp->fd == fd)
			return (tmp);
		cur = cur->next;
	}
	if (!(tmp = (t_reader*)ft_memalloc(sizeof(t_reader))))
		return (0);
	tmp->fd = fd;
	if (!(cur = ft_lstnew(tmp, sizeof(t_reader))))
		return (0);
	free(tmp);
	ft_lstadd(multilist, cur);
	return ((t_reader*)cur->content);
}

int						get_next_line(const int fd, char **line)
{
	static t_list	*multilist;
	t_reader		*rdr;
	int				ret;

	if (fd < 0 || !line || !(rdr = ft_get_file_manager(fd, &multilist)))
		return (-1);
	ft_reset_buff(rdr);
	while (!(rdr->el = ft_memchr(rdr->buffer, '\n', rdr->r_size)) && !rdr->stop)
	{
		if ((ret = ft_reading(fd, rdr)) != 1)
			return (ret);
	}
	if (rdr->stop)
	{
		if (rdr->r_size)
			rdr->el = rdr->buffer + rdr->r_size;
		else
			return (0);
	}
	if (!(*line = ft_strnew(rdr->el - rdr->buffer)))
		return (-1);
	ft_memcpy(*line, rdr->buffer, rdr->el - rdr->buffer);
	return (1);
}

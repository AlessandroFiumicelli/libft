/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 14:29:09 by alfiumic          #+#    #+#             */
/*   Updated: 2019/02/21 14:45:29 by alfiumic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef	struct	s_reader
{
	int		fd;
	char	*buffer;
	char	*el;
	int		stop;
	size_t	r_size;
	size_t	b_size;
}				t_reader;

int				get_next_line(const int fd, char **line);

#endif

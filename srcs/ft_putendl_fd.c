
#include "../includes/ft_h.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, '\n', 1);
}

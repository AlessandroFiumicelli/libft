
#include "../includes/ft_h.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	size;

	size = ft_strlen(s);
	write(fd, s, size);
}

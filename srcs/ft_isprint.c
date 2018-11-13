
#include "../includes/ft_h.h"

int	ft_isprint(int c)
{
	if ((unsigned char)c >= 32 && (unsigned char)c <= 127)
		return (1);
	return (0);
}

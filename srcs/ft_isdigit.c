
#include "../includes/ft_h.h"

int	ft_isdigit(int c)
{
	if ((unsigned char)c >= 48 && (unsigned char)c <= 57)
		return (1);
	return (0);
}

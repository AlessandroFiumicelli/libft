
#include "../includes/ft_h.h"

int	ft_islower(int c)
{
	if ((unsigned char)c >= 97 && (unsigned char)c >= 122)
		return (1);
	return (0);
}

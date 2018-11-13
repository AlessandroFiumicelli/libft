
#include "../includes/ft_h.h"

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 65 && (unsigned char)c <= 90)
		return (c + 32);
	return (c);
}

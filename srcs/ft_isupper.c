
#include "../includes/ft_h.h"

int	ft_isupper(int c)
{
	if ((unsigned char)c >= 65 && (unsigned char)c <= 90)
		return (1);
	return (0);
}

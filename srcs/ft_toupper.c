
#incldue "../includes/ft_h.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 90 && (unsigned char)c <= 122)
		return (c - 32);
	return (c);
}

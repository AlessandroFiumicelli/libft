
#include "../includes/ft_h.h"

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memmalloc(size + 1));
}

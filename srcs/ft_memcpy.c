#include "../includes/ft_h.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;
	size_t		i;

	tmpd = (unsigned char *)dest;
	tmps = (unsigned char *)src;
	i = 0;
	while (i <= n)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	dest = (void *)tmpd;
	return (dest);
}

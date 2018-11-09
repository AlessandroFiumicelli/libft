
#include "../includes/ft_h.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;
	size_t		i;

	i = 0;
	tmpd = (unsigned char *)dest;
	tmps = (unsigned char *)src;
	while (i <= n)
	{
		tmpd[i] = tmps[i];
		if (tmps == (unsigned char)c)
			return ((void *)&tmps[i + 1]);
		i++;
	}
	return (NULL);

}

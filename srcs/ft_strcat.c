#include "../includes/ft_h.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

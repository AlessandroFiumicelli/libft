
#include "../include/ft_h.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s || !(str = ft_memmalloc(len + 1)))
		return (NULL);
	while (i <= len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

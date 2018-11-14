
#include "../includes/ft_h.h"

char	*ft_strtrim(char const *s)
{
	char		*str;
	unsigned int	start;
	size_t		len;

	start = 0;
	len = ft_strlen(s);
	while (s[start] == 32 || str[start] == '\t' || s[start] == '\n')
		start++;
	if (s[len - 1] == 32 || str[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[len] == 32 || str[len] == '\t' || s[len] == '\n')
		len--;
	if (!(str = ft_strsub(s, start, len)))
		return (NULL);
	return (str);
}


#include "../includes/ft_h.h"

char	*ft_strmapi(char const *s, void (*f)(unsigned int, char))
{
	char		*str;
	unsigned int	i;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}

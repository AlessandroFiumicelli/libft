
#include "../includes/ft_h.h"

char	*ft_strmap(char const *s, void (f)(char))
{
	char		*str;
	unsigned int	i;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}

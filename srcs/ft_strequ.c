
#include "../includes/ft_h.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}

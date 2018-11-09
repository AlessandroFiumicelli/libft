
#ifndef FT_H_H
# define FT_H_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s1);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
void	*ft_memste(char *s, int c, size_t n);


#endif

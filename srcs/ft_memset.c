
void	*ft_memset(char *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

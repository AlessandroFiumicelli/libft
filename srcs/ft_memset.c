
void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i <= n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	s = (void *)str;
	return (s);
}

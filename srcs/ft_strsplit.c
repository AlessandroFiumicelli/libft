
#include "../includes/ft_h.h"


static int	ft_count_word(char const *str, char c)
{
	int		cnt;
	int		num;

	cnt = 0;
	num = 0;
	if (!str)
		return (0);
	while (str[cnt])
	{
		if (cnt == 0 && str[cnt] == c)
			num++;
		cnt++;
	}
	return (num);
}


static int	ft_custom_strlen(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (s[cnt] != c)
		cnt++;
	return (cnt);
}

char		**ft_strsplit(char const *s, char c)
{
	int		cnt;
	int		ind;
	int		num;
	int		len;
	char		**matrix;

	ind = 0;
	num = ft_count_word(s, c);
	if (!(matrix = (char **)malloc(sizeof(char *) * num + 1)))
		return (0);
	cnt = 0;
	while (ind < num)
	{
		while (s[cnt] && s[cnt] == c)
			cnt++;
		len = ft_custom_strlen(&s[cnt], c);
		if (!(matrix[ind] = (char*)malloc(sizeof(char) * len + 1)))
			return (0);
		matrix[ind] = strncpy(matrix[ind], &s[cnt], len);
		ind++;
		cnt += len;
	}
	matrix[ind] = NULL;
return (matrix);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	unsigned int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_putstr(tab[i]);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_print_words_tables(ft_strsplit(argv[1], argv[2][0]));
	return (0);
}

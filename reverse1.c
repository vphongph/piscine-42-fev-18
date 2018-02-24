#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		count_wd(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			count++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			i++;
	}
	return (count);
}

int		len_wd(char *str, int i)
{
	int	max;

	max = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		max++;
		i++;
	}
	return (max);
}

int		skip(char *str, int k)
{
	while (str[k] == ' ' || str[k] == '\t')
		k++;
	return (k);
}

char			**ft_strsplit(char *str)
{
	char	**tab;
	int		i[2];
	int		k;

	i[0] = 0;
	k = 0;
	if (str == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (count_wd(str) + 1));
	while (i[0] < count_wd(str))
	{
		k = skip(str, k);
		i[1] = 0;
		tab[i[0]] = (char *)malloc(sizeof(char) * (len_wd(str, k) + 1));
		while (str[k] != '\0' && str[k] != '\t' && str[k] != ' ')
		{
			tab[i[0]][i[1]] = str[k];
			k++;
			i[1]++;
		}
		tab[i[0]][i[1]] = '\0';
		i[0]++;
	}
	tab[i[0]] = NULL;
	return (tab);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;
	char **tab;

		i= count_wd(av[1]) - 1;

		tab = ft_strsplit(av[1]);
		while (i >= 0)
		{
			ft_putstr(tab[i]);
			if (i != 0)
			write(1, " ", 1);
			i--;
		}
	}
}


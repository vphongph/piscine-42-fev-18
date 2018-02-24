#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		count_word(char *str)
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

int 	size_word(char *str, int i)
{
	int size;

	size = 0;
	while ( str[i]  && str[i] != ' ' && str[i] != '\t')
	{
		i++;
		size++;
	}
	return (size);
}

char	**ft_reverse(char *str)
{
	char **tab;
	int i;
	int j;
	int c;

	i = 0;
	c = -1;
	tab = (char **)malloc(sizeof(char *) * count_word(str) + 1);

	while (str[i])
	{
		j = 0;
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			c++;
			tab[c] = (char *)malloc(sizeof(char) * size_word(str, i) + 1);
			while (str[i]  && str[i] != ' ' && str[i] != '\t')
			{
				tab[c][j] = str[i];
				i++;
				j++;
			}
			tab[c][j] = '\0';
		}
		if (str[i] == '\0') //POURQUOI
			return ;
		i++;
	}
	tab[count_word(str)] = NULL; // (void*)0 bizarre
	return (tab);
}

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

int 	main(int ac, char **av)
{
	if (ac == 2)
	{
		char **tab;
		int i;
		i = 0;

		tab = ft_reverse(av[1]);
		
		while (tab[i] != NULL)
		{
			ft_putstr(tab[i]);
			write(1, " ", 1);
			i++;
		}
	}
	return (0);
}


//str  = "  toto va a la mer"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/03/02 01:34:21 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i])
		i++;
	write(1, &str, i);
}

int		ft_count_wrd(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;

	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i])
			count++;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
			i++;
	}
	return (count);
}

int		ft_len_wrd(char *str, int i)
{
	int len;
	len = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char *str)
{
	char **tab;
	int i;
	int j;
	int k;

	if (str == NULL)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char*) * ft_count_wrd(str) + 1)))
		return NULL;
	tab[ft_count_wrd(str)] = NULL;

	i = 0;
	j = 0;
	while(i < ft_count_wrd(str) && str[j])
	{
		while ((str[j] == ' ' || str[j] == '\t') && str[j])
			j++;
		if (str[j] != ' ' && str[j] != '\t' && str[j])
		{
			k = 0;
			if(!(tab[i] = (char*)malloc(sizeof(char) * ft_len_wrd(str, j) + 1)))
				return (NULL);
			tab[i][ft_len_wrd(str, j)] = '\0';
			while (str[j] != ' ' && str[j] != '\t' && str[j])
			{
				tab[i][k]= str[j];
				k++;
				j++;
			}
		}
		i++;
	}
	return(tab);
}

int		main(int ac, char **av)
{
	int i;
	char **tab;

	if (ac != 2)
		return (0);
	tab = ft_split(av[1]);
	i = ft_count_wrd(av[1]) - 1;
	while (i >= 0)
	{
		ft_putstr(tab[i]);
		if (i != 0)
			write(1, " ", 1);
		i--;
	}
	free(tab);
}

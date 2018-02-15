/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/15 15:32:58 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(unsigned int a)
{
	if (a >= 10)
		ft_print(a / 10);
	ft_putchar(a % 10 + '0');
}

void	ft_putnbr(int nb)
{
	unsigned int a;

	a = (unsigned int)nb;
	if (nb < 0)
	{
		ft_putchar('-');
		a = (unsigned int)(-nb);
	}
	ft_print(a);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
//	ft_putchar('\n');
}

//printf("blabla = \n%s", arg);

void	ft_sort_integer_table(int *tab, int size);

int		main(void)
// int	main(int ac, char **av)
{
	
	int taille;
	int i;
	int tab[10]={3,0,4,2147483647,5,6,-2147483648,2,9,-1};
	i = -1;
	taille = 10;	
	ft_putstr("\ntab : ");
	while (i++ < taille - 1)
	{
		ft_putnbr(tab[i]);
		ft_putstr("  ");
	}
	
	ft_sort_integer_table(tab, taille);
	
	i = -1;
	ft_putstr("\ntab : ");
	while (i++ < taille - 1)
	{	
		ft_putnbr(tab[i]);
		ft_putstr("  ");
	}

	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

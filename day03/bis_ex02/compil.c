/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/15 19:29:14 by vphongph         ###   ########.fr       */
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

void	ft_swap(int *a, int *b);

int		main(void)
// int	main(int ac, char **av)
{
	int *lol;
	int *mdr;
	int i;
	int j;

	i = 123;
	j = 321;
	lol = &i;
	mdr = &j;

	write(1, "\ni: ", 4);
	ft_putnbr(i);
	write(1, "\nj: ", 4);
	ft_putnbr(j);


	ft_swap(lol, mdr);
	
	write(1, "\ni: ", 4);
	ft_putnbr(i);
	write(1, "\nj: ", 4);
	ft_putnbr(j);

	
	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

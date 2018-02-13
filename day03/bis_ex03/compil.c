/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/13 14:04:34 by vphongph         ###   ########.fr       */
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

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
// int	main(int ac, char **av)
{
	int lol;
	int mdr;
	int *ptdr;
	int *XD;

	lol = -2147483648;
	mdr = 7;
	ptdr = &lol;
	XD = &mdr;

	ft_div_mod(lol, mdr, ptdr, XD);

	printf("div = %d \nmod = %d \n", *ptdr, *XD);
	
	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/20 17:20:50 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	ft_print(unsigned int a)
// {
// 	if (a >= 10)
// 		ft_print(a / 10);
// 	ft_putchar(a % 10 + '0');
// }

// void	ft_putnbr(int nb)
// {
// 	unsigned int a;

// 	a = (unsigned int)nb;
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		a = (unsigned int)(-nb);
// 	}
// 	ft_print(a);
// }

//printf("blabla = \n%s", arg);

void ft_putnbr(int nb);

int		main(void)
// int	main(int ac, char **av)
{
	int nb = -2147483648;

	ft_putnbr(nb);
	write(1, "\n", 1);

	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

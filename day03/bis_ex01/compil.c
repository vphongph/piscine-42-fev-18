/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/12 21:26:35 by vphongph         ###   ########.fr       */
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

void	ft_ultimate(int *********nbr);

int		main(void)
// int	main(int ac, char **av)
{
	int a;
	int *point1;
	int **point2;
	int ***point3;
	int ****point4;
	int *****point5;
	int ******point6;
	int *******point7;	
	int ********point8;
	int *********point9;

	point1 = &a;
	point2 = &point1;
	point3 = &point2;
	point4 = &point3;
	point5 = &point4;
	point6 = &point5;
	point7 = &point6;
	point8 = &point7;
	point9 = &point8;

	ft_ultimate(point9);
	ft_putnbr(*********point9);

	ft_ultimate(point9);

	
	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

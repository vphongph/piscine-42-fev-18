/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/22 23:29:44 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

//printf("blabla = \n%s", arg);

int ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
// int	main(int ac, char **av)
{

	unsigned int n = 4;
	
char str1[8] = "FooFood";
char str2[9] = "Foo Food";
char str3[8] = "FooFood";
char str4[9] = "Foo Food";

printf("\nstr1 = %s\nstr2 = %s\n", str1, str2);
printf("\n\tstrncmp = %d\n", strncmp(str1, str2, n));
printf("\nstr1 = %s\nstr2 = %s\n", str1, str2);

printf("\nstr3 = %s\nstr4 = %s\n", str3, str4);
printf("\n\tft_strncmp = %d\n", ft_strncmp(str3, str4, n));
printf("\nstr3 = %s\nstr4 = %s\n", str3, str4);
	
	
	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/22 19:12:23 by vphongph         ###   ########.fr       */
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

int ft_strcmp(char *s1, char *s2);

int		main(void)
// int	main(int ac, char **av)
{
	
char str1[8] = "FooFood";
char str2[4] = "Foo ";
char str3[8] = "FooFood";
char str4[4] = "Foo ";

printf("\nstr1 = %s\nstr2 = %s\n", str1, str2);
printf("\n\tstrcomp = %d\n", strcmp(str1, str2));
printf("\nstr1 = %s\nstr2 = %s\n", str1, str2);

printf("\nstr3 = %s\nstr4 = %s\n", str3, str4);
printf("\n\tft_strcomp = %d\n", ft_strcmp(str3, str4));
printf("\nstr3 = %s\nstr4 = %s\n", str3, str4);
	
	
	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

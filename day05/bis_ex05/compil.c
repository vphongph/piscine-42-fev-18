/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/22 03:55:53 by vphongph         ###   ########.fr       */
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

char *ft_strstr(char *str, char *to_find);

int		main(void)
// int	main(int ac, char **av)
{
	
char str1[13] = "Foo Food Baz";
char to_find1[5] = "Food";
char str2[13] = "Foo Food Baz";
char to_find2[5] = "Food";


printf("\nstr1 = %s\nto find1 = %s\n", str1, to_find1);
printf("\n\tstrstr = %s\n", strstr(str1, to_find1));
printf("\nstr1 = %s\nto find1 = %s\n", str1, to_find1);

printf("\nstr2 = %s\nto find2 = %s\n", str2, to_find2);
printf("\n\tft_strstr = %s\n", ft_strstr(str2, to_find2));
printf("\nstr2 = %s\nto find2 = %s\n", str2, to_find2);
	
	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

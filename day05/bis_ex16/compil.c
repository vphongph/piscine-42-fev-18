/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/27 13:33:19 by vphongph         ###   ########.fr       */
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

char 	*ft_strcat(char *dest, char *src);

int		main(void)
// int	main(int ac, char **av)
{
	
char src1[14] = "~132~";
char dest1[80] = "Foo";
char src2[14] = "~123~";
char dest2[80] = "Foo";


printf("\nsrc1 = %s\ndest1 = %s\n", src1, dest1);
printf("\n\tstrcat = %s\n", strcat(dest1, src1));
printf("\nsrc1 = %s\ndest1 = %s\n", src1, dest1);

printf("\nsrc2 = %s\ndest2 = %s\n", src2, dest2);
printf("\n\tft_strcat = %s\n", ft_strcat(dest2, src2));
printf("\nsrc2 = %s\ndest2 = %s\n", src2, dest2);
	
	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');
	return 0;
}

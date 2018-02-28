/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compil.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/27 16:14:29 by vphongph         ###   ########.fr       */
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

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
// int	main(int ac, char **av)
{
	char *strsource1;
	char *strdest1;
	char *strsource2;
	char *strdest2;
	unsigned int n;

	n = 2;

	strsource1 = (char *)malloc(sizeof(char) * 5);
	strdest1 = (char *)malloc(sizeof(char) * 7);
	strsource2 = (char *)malloc(sizeof(char) * 5);
	strdest2 = (char *)malloc(sizeof(char) * 7);	



	strsource1[0] = 'c';
	strsource1[1] = 'a';
	strsource1[2] = 'c';
	strsource1[3] = 'a';
	strsource1[4] = '\0';
	// strsource1 = NULL;

	strdest1[0] = '0';
	strdest1[1] = '1';
	strdest1[2] = '2';
	strdest1[3] = '3';
	strdest1[4] = '4';
	strdest1[5] = '5';
	strdest1[6] = '\0';
	// strdest1 = NULL;

	strsource2[0] = 'c';
	strsource2[1] = 'a';
	strsource2[2] = 'c';
	strsource2[3] = 'a';
	strsource2[4] = '\0';
	// strsource2 = NULL;

	strdest2[0] = '0';
	strdest2[1] = '1';
	strdest2[2] = '2';
	strdest2[3] = '3';
	strdest2[4] = '4';
	strdest2[5] = '5';
	strdest2[6] = '\0';
	// strdest2 = NULL;

	printf("\nsource = %s\ndest = %s\n", strsource1, strdest1);
	printf("\nstrncpy dest = %s\n", strncpy(strdest1, strsource1, n));
	printf("\nsource = %s\ndest = %s\n", strsource1, strdest1);

	printf("\nsource = %s\ndest = %s\n", strsource2, strdest2);
	printf("\nft strncpy dest = %s\n", ft_strncpy(strdest2, strsource2, n));
	printf("\nsource = %s\ndest = %s\n", strsource2, strdest2);

	// if (ac != 2)
		// return 0;
	// ft_putnbr(atoi(av[1]));	
	// ft_putchar('\n');

	free(strsource1);
	free(strdest1);
	free(strsource2);
	free(strdest2);
	return 0;
}

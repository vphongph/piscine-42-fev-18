/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_avec_arthur.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 15:31:13 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/12 17:55:25 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


void	ft_ft(int *nbr);
void	ft_putnbr(int nb);

int main (void)
{
	// int *nbr;

	// int *tmp;

	// *nbr = 12;
	// *tmp = 99;

	// ft_putnbr(*nbr);
	// nbr = tmp;


	// // ft_ft(nbr);
	// ft_putnbr(*nbr);

// int i;

// i = sizeof(long long int);

// ft_putnbr(i);

char *a;

	a = (char*)malloc(sizeof(char) * 20);	
	a = "salut jean bont";

	char a[] = "salut"
	a[0] = 'u';
	a[1] = 'i';
	a[2] = 'p';
	a[3] = 'l';
	a[4] = 'c';




	int i;

	i = 0;
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}



	return (0);
}

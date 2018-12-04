/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/12/04 23:20:44 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


unsigned char ft_reversebit(unsigned char c)
{
	int count;
	int shift;
	unsigned char tmp;
	unsigned char rev;

	shift = 0;
	count = 0;
	rev = 0;

	while (count < 8)
	{
		tmp = c >> shift;
		tmp = tmp << 7;
		tmp = tmp >> shift;
		rev = rev | tmp;
		shift++;
		count++; 
	}

	return(rev);
}

void	ft_printbit(unsigned char c)
{
	int shift;
	unsigned char tmp;

// attention a bien declarer tmp comme unsigned, sinon mauvais comportement.

	// c = ~c;
	// c = c << 4 | c >> 4;

	shift = 0;
	while (shift < 8)
	{
		tmp = c << shift;
		tmp = tmp >> 7;
		tmp = tmp + '0';
		write(1, &tmp, 1);
		shift ++;
	}
}

void	ft_printbite(unsigned char c)
{
	int n;

	n = 8;
	while (n--)
		ft_putchar(((c >> n) & 1) + '0');
}

int	main(void)
{
	unsigned char c;

	c = 42;
	ft_printbit(c);
	write(1,"\n", 1);
	// ft_printbit(ft_reversebit(c));
	write(1,"\n", 1);
	ft_printbite(c);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/03/01 19:24:22 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int count;
	int shift;
	unsigned char tmp;

// attention a bien declarer tmp comme unsigned, sinon mauvais comportement.

	// c = ~c;
	// c = c << 4 | c >> 4;

	shift = 0;
	count = 0;
	while (count < 8)
	{
		tmp = c << shift;
		tmp = tmp >> 7;
		tmp = tmp + '0';
		write(1, &tmp, 1);
		count ++;
		shift ++;
	}
}

int	main(void)
{
	unsigned c;

	c = 46;
	ft_printbit(ft_reversebit(c));
	write(1,"\n", 1);
	ft_printbit(c);
	write(1,"\n", 1);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/23 16:29:54 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

	c = 255;
	ft_printbit(c);
	write(1,"\n", 1);
	return 0;
}

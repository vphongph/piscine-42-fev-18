/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 13:40:57 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/12 16:03:29 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b)
{
	int c;
	int d;

	if (a < b)
	{
		c = a / 10;
		ft_putchar(c + '0');
		c = a % 10;
		ft_putchar(c + '0');
		ft_putchar(' ');
		d = b / 10;
		ft_putchar(d + '0');
		d = b % 10;
		ft_putchar(d + '0');
		if (!(a == 98 && b == 99))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i <= 98)
	{
		j = 0;
		while (++j <= 99)
			ft_print(i, j);
	}
}

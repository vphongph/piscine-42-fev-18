/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 13:40:57 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/11 16:13:04 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char a, char b, char c)
{
	if (a < b && b < c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (!(a == '7' && b == '8' && c == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char c1;
	char c2;
	char c3;

	c1 = '0';
	c2 = '1';
	c3 = '2';
	while (c1 <= '7')
	{
		while (c2 <= '8')
		{
			while (c3 <= '9')
			{
				ft_print(c1, c2, c3);
				c3++;
			}
			c3 = '0';
			c2++;
		}
		c2 = '0';
		c1++;
	}
}

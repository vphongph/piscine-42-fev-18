/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 22:00:12 by rfontain          #+#    #+#             */
/*   Updated: 2018/02/11 22:51:42 by jsauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_last(int x)
{
	int i;
	int j;

	i = 2;
	j = 1;
	if (x > 1)
		ft_putchar('o');
	while (i < x)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;
	int k;
	int m;

	k = 2;
	m = 0;
	if (x <= 0 || y <= 0)
		return ;
	print_first_last(x);
	while (m < y - 2)
	{
		j = 2;
		if (x > 1)
			ft_putchar('|');
		while (j < x)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		m++;
	}
	if (y >= 2)
		print_first_last(x);
}

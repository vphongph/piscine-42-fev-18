/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 22:22:34 by rfontain          #+#    #+#             */
/*   Updated: 2018/02/11 22:54:46 by jsauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first(int x)
{
	int i;
	int j;

	i = 2;
	j = 1;
	ft_putchar('A');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	print_last(int x)
{
	int i;
	int j;

	i = 2;
	j = 1;
	ft_putchar('C');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('A');
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
	print_first(x);
	while (m < y - 2)
	{
		j = 2;
		if (x > 1)
			ft_putchar('B');
		while (j < x)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		m++;
	}
	if (y >= 2)
		print_last(x);
}

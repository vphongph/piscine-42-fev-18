/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/15 23:54:04 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_matin(int hour, int hourplus, char c1, char c2)
{
	if (hour >= 1 && hour < 11)
	{
		c1 = 'A';
		c2 = 'A';
	}
	if (hour == 11)
	{
		c1 = 'A';
		c2 = 'P';
	}
	if (hour == 0)
	{
		hour = 12;
		hourplus = 1;
		c1 = 'A';
		c2 = 'A';
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, c1, hourplus, c2);
}

void	ft_aprem(int hour, int hourplus, char c1, char c2)
{
	if (hour >= 13 && hour < 23)
	{
		hour = hour - 12;
		hourplus = hour + 1;
		c1 = 'P';
		c2 = 'P';
	}
	if (hour == 23)
	{
		hour = hour - 12;
		hourplus = 12;
		c1 = 'P';
		c2 = 'A';
	}
	if (hour == 12)
	{
		hourplus = 1;
		c1 = 'P';
		c2 = 'P';
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, c1, hourplus, c2);
}

void	ft_takes_place(int hour)
{
	char	c1;
	char	c2;
	int		hourplus;

	c1 = 0;
	c2 = 0;
	hourplus = hour + 1;
	if (hour >= 0 && hour < 12)
		ft_matin(hour, hourplus, c1, c2);
	else
		ft_aprem(hour, hourplus, c1, c2);
}

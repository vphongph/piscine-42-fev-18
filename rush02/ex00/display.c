/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/25 21:53:19 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display3(int i, int j, char *size)
{
	char a;
	char b;

	a = size[0] + '0';
	b = size[1] + '0';
	if (i == 4)
	{
		if (j == 1)
			write(1, " || ", 4);
		write(1, "[colle-04] [", 12);
		write(1, &a, 1);
		write(1, "] [", 3);
		write(1, &b, 1);
		write(1, "]", 1);
	}
}

void	ft_display2(int i, int j, char *size)
{
	char a;
	char b;

	a = size[0] + '0';
	b = size[1] + '0';
	if (i == 2)
	{
		if (j == 1)
			write(1, " || ", 4);
		write(1, "[colle-02] [", 12);
		write(1, &a, 1);
		write(1, "] [", 3);
		write(1, &b, 1);
		write(1, "]", 1);
	}
	if (i == 3)
	{
		if (j == 1)
			write(1, " || ", 4);
		write(1, "[colle-03] [", 12);
		write(1, &a, 1);
		write(1, "] [", 3);
		write(1, &b, 1);
		write(1, "]", 1);
	}
}

void	ft_display1(int i, int j, char *size)
{
	char a;
	char b;

	a = size[0] + '0';
	b = size[1] + '0';
	if (i == 0)
	{
		write(1, "[colle-00] [", 12);
		write(1, &a, 1);
		write(1, "] [", 3);
		write(1, &b, 1);
		write(1, "]", 1);
	}
	if (i == 1)
	{
		if (j == 1)
			write(1, " || ", 4);
		write(1, "[colle-01] [", 12);
		write(1, &a, 1);
		write(1, "] [", 3);
		write(1, &b, 1);
		write(1, "]", 1);
	}
}

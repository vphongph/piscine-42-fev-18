/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:42:58 by exam              #+#    #+#             */
/*   Updated: 2018/02/23 19:40:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	int count = 0;
	while (av[2][count])
		count++;
	if (count > 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	count = 0;
	while (av[3][count])
		count++;
	if (count > 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	count = 0;
	int i = -1;

	while (av[1][++i])
	{
		if (av[1][i] == av[2][0])
		{
			av[1][i] = av[3][0];
			count++;
		}
	}
		
	int len = 0;
	
	while (av[1][len])
		len++;

	if (count == 0)
	{
		write(1, &av[1][0], len);
		write(1, "\n", 1);
	}
	else
	{
		write(1, &av[1][0], len);
		write(1, "\n", 1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/28 20:28:44 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_square_point(t_map *map_o)
{
	int i;
	int j;

	i = (*map_o).s_y;
	j = (*map_o).s_x;
	while (i < (*map_o).s_y + (*map_o).c + 1)
	{
		if (i >= (*map_o).line)
			return (-3);
		j = (*map_o).s_x;
		while (j < (*map_o).s_x + (*map_o).r + 1)
		{
			if (j >= (*map_o).len)
				return (-2);
			if ((*map_o).map[i][j++] == (*map_o).obstacle)
				return (j);
		}
		i++;
	}
	return (-1);
}

void	find_square(t_map *map_o)
{
	int r;

	while ((*map_o).s_x < (*map_o).len && (*map_o).s_y < (*map_o).line)
	{
		r = check_square_point((map_o));
		if (r == -1)
		{
			(*map_o).s_x_r = (*map_o).s_x;
			(*map_o).s_y_r = (*map_o).s_y;
			(*map_o).r++;
			(*map_o).c++;
		}
		else if (r == -2)
		{
			(*map_o).s_x = 0;
			(*map_o).s_y++;
		}
		else if (r == -3)
			break ;
		else
			(*map_o).s_x = r;
	}
}

void	draw_map(t_map *map_o)
{
	int i;
	int j;
	int x;
	int y;

	i = 0;
	j = 0;
	x = (*map_o).s_x_r;
	y = (*map_o).s_y_r;
	while (i < (*map_o).c)
	{
		j = 0;
		while (j < (*map_o).r)
			(*map_o).map[y + i][x + j++] = (*map_o).full;
		i++;
	}
}

void	print_map(t_map *map_o)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (*map_o).line)
	{
		j = 0;
		while (j < (*map_o).len)
			ft_putchar((*map_o).map[i][j++]);
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	t_map	*map_array;

	map_array = (t_map*)malloc(sizeof(t_map) * (argc - 1) + 1);
	i = 1;
	while (i < argc)
	{
		map_array[i - 1] = read_map(argv[i]);
		find_square(&map_array[i - 1]);
		draw_map(&map_array[i - 1]);
		print_map(&map_array[i - 1]);
		i++;
	}
	return (0);
}

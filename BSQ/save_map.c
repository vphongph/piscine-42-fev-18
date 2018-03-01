/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/28 20:23:19 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	save_map(t_map *map_o, int *i, char *buf)
{
	int x;
	int y;

	(*map_o).map = (char **)malloc(sizeof(char*) * ((*map_o).line + 1));
	x = -1;
	while (buf[(*i)])
	{
		if (buf[(*i)] == '\n' && x < (map_o->line - 1))
		{
			(*map_o).map[++x] = (char *)malloc(sizeof(char) * (*map_o).len);
			y = 0;
			(*i)++;
		}
		else if (buf[(*i)] != '\n')
		{
			if (x == map_o->line || y == map_o->len
			|| (buf[*i] != map_o->empty && buf[*i] != map_o->obstacle))
				return (0);
			(*map_o).map[x][y++] = buf[(*i)++];
		}
		else
			(*i)++;
	}
	if (x != (map_o->line - 1) || y != map_o->len)
		return (0);
	return (1);
}

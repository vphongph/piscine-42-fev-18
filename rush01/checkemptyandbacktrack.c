/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkemptyandbacktrack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/18 23:32:04 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int 	ft_checkemptyandbacktrack(int i, int j, char c, char **grid)
{
	if (ft_checkrcol(i, j, c, grid) && ft_checkc(i, j, c, grid))
	{
		grid[i][j] = c;
		if (ft_solve(grid))
			return (1);
		grid[i][j] = '.';
	}
}
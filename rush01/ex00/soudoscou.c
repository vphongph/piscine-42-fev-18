/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soudoscou.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/18 23:32:41 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_checkvalid(int i, int j, char c, char **grid)
{
	int k;
	int l;
	l = 0;
	while (grid[i][l])
	{	
		if (grid[i][l] == c)
		{
			return (1);
		}
		l++;
	}
	k = 0;
	while (grid[k])
	{	
		if (grid[k][j]== c)
		{
			return (1);
		}
		k++;
	}
	l = 3 * (j / 3);
	k = 3 * (i / 3);
	i = k;
	while (i < k + 3)
	{	
		j = l; 
		while (j < l + 3)
		{	
			if (grid[i][j] == c)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}


int 	ft_solve(char **grid)
{
	int i;
	int j;
	char c;
	int status;

	i = 0;
	c = '1';
	status = 1;
	while (i < 9)
	{	
		j = 0;
		while (j < 9)
		{	
			if (grid[i][j] == '.')
			{	
				status = 0;
				while (c <= '9')
				{
					if (!(ft_checkvalid(i, j, c, grid)))
					{
						grid[i][j] = c;
						if (ft_solve(grid))
							return (1);
						grid[i][j] = '.';
					}
					c++;
				}
			}
			j++;
		}
	i++;
	}
	if (status == 1)
		return (1);
	else
		return (0);
}

int 	ft_solverev(char **grid)
{
	int i;
	int j;
	char c;
	int status;

	i = 8;
	c = '1';
	status = 1;
	while (i >= 0)
	{	
		j = 8;
		while (j >= 0)
		{	
			if (grid[i][j] == '.')
			{	
				status = 0;
				while (c <= '9')
				{
					if (!(ft_checkvalid(i, j, c, grid)))
					{
						grid[i][j] = c;
						if (ft_solverev(grid))
							return (1);
						grid[i][j] = '.';
					}
					c++;
				}
			}
			j--;
		}
	i--;
	}
	if (status == 1)
		return (1);
	else
		return (0);
}

void	ft_display(char **grid)
{
	int i;
	int j;

	i = 0;

	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			write(1, &grid[i][j], 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_checkargv(char **grid)
{
	int i;
	int j;

	i = 1;

	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			if ((grid[i][j] < '1' || grid[i][j] > '9') && grid[i][j] != '.')
				return (1);
			j++;
		}
		if (j != 9)
			return(1);
		i++;
	}
	if (i != 10)
		return(1);
	return (0);
}

int		ft_comp(char **grid, char **gridrev)
{
	int i;
	int j;
	
	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			if (grid[i][j] != gridrev[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**alloc_grid(char **grid)
{
	int i;

	i = 0;
	while(i < 10)
	{
		grid[i] = (char*)malloc(sizeof(char) * 10);
		if (grid == NULL)
			return (0);
		i++;
	}
	return (grid);
}

char	**ft_fill(char **source)
{
	int i;
	int j;
	char **grid;

	i = 0;
	grid = (char**)malloc(sizeof(char*) * 10);
	if (grid == NULL)
		return (0);
	grid = alloc_grid(grid);
		if(!alloc_grid(grid))
			return (0);
	i = 0;
	while (source[i])
	{
		j = 0;
		while (source[i][j])
		{
			grid[i][j] = source[i][j];
			j++;
		}
		grid[i][j] = '\0';
		i++;
	}
	grid[i] = NULL;
	return (grid);
}

int		main(int argc, char **argv)

{
	char **grid;
	char **gridrev;

	if (argc != 10 || !argv || (ft_checkargv(argv) == 1))
		write(1, "Error\n", 7);
	else
	{
		grid = ft_fill(argv + 1);
		gridrev = ft_fill(argv + 1);

		ft_solverev(gridrev);
		ft_solve(grid);
		if (ft_comp(grid, gridrev))
		{	
			ft_display(grid);
		}
		else
			write(1, "Error\n", 7);
	}
	return (0);
}

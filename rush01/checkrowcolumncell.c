/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkrowcolumncell.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/18 23:11:49 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkrowcolumn(int i, int j, char c, char **grid)
{
	int k;
	int l;

	l = 0;
	while (grid[i][l])
	{
		if (grid[i][l] == c)
		{
			return (0);
		}
		l++;
	}
	k = 0;
	while (grid[k])
	{
		if (grid[k][j] == c)
		{
			return (0);
		}
		k++;
	}
	return (1);
}

int	ft_checkcell(int i, int j, char c, char **grid)
{
	int k;
	int l;

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
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

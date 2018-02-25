/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_and_compare.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/25 23:32:07 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_size(char *str)
{
	int		i;
	int		s;
	char	*size;

	i = 0;
	s = 0;
	if (!(size = (char*)malloc(sizeof(char) * 2 + 1)))
		return (NULL);
	size[2] = '\n';
	while (str[i] != '\n' && str[i])
	{
		s++;
		i++;
	}
	size[0] = s;
	i = -1;
	s = 0;
	while (str[++i])
		if (str[i] == '\n')
			s++;
	size[1] = s;
	if (size[0] == 0 || size[1] == 0)
		return (NULL);
	return (size);
}

int		ft_compare2(char *size, char *str, int displayed)
{
	if (ft_strcmp(str, ft_rush03(size[0], size[1])->str) == 0)
	{
		ft_display2(3, displayed, size);
		displayed = 1;
	}
	if (ft_strcmp(str, ft_rush04(size[0], size[1])->str) == 0)
	{
		ft_display3(4, displayed, size);
		displayed = 1;
	}
	if (displayed == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	return (1);
}

int		ft_compare1(char *size, char *str)
{
	int		displayed;

	displayed = 0;
	if (ft_strcmp(str, ft_rush00(size[0], size[1])->str) == 0)
	{
		ft_display1(0, displayed, size);
		displayed = 1;
	}
	if (ft_strcmp(str, ft_rush01(size[0], size[1])->str) == 0)
	{
		ft_display1(1, displayed, size);
		displayed = 1;
	}
	if (ft_strcmp(str, ft_rush02(size[0], size[1])->str) == 0)
	{
		ft_display2(2, displayed, size);
		displayed = 1;
	}
	if (ft_compare2(size, str, displayed) == 0)
		return (0);
	return (1);
}

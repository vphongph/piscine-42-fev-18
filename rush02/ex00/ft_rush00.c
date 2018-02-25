/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/25 23:14:45 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void			ft_export(t_rush *rush, char left, char mid, char right)
{
	int i;
	int index;

	index = rush->index;
	i = 0;
	while (i < rush->largeur)
	{
		if (i == 0)
			rush->str[index] = left;
		else
		{
			if (i == rush->largeur - 1)
				rush->str[index] = right;
			else
				rush->str[index] = mid;
		}
		index++;
		i++;
	}
	rush->str[index] = '\n';
	index++;
	rush->index = index;
}

t_rush			*ft_rush00(int largeur, int hauteur)
{
	t_rush	*rush;
	int		i;

	rush = malloc(sizeof(*rush));
	rush->str = malloc(sizeof(char) * (largeur) * hauteur);
	rush->largeur = largeur;
	rush->hauteur = hauteur;
	rush->index = 0;
	i = -1;
	if (largeur < 1 || hauteur < 1)
		return (rush);
	while (++i < hauteur)
	{
		if (i == 0)
			ft_export(rush, 'o', '-', 'o');
		else
		{
			if (i < hauteur - 1)
				ft_export(rush, '|', ' ', '|');
			else
				ft_export(rush, 'o', '-', 'o');
		}
	}
	rush->str[rush->index] = '\0';
	return (rush);
}

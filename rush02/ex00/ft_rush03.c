/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/25 23:23:11 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_rush			*ft_rush03(int largeur, int hauteur)
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
			ft_export(rush, 'A', 'B', 'C');
		else
		{
			if (i < hauteur - 1)
				ft_export(rush, 'B', ' ', 'B');
			else
				ft_export(rush, 'A', 'B', 'C');
		}
	}
	rush->str[rush->index] = '\0';
	return (rush);
}

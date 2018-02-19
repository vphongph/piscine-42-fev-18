/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/20 00:51:44 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int x;
	int y;

	x = 1;
	y = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb <= 1)
		return (0);
	while (x < nb / x)
		x++;
	while (y <= x)
	{
		if (nb % y == 0)
			return (0);
		y++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

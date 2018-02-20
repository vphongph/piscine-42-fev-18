/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/20 17:20:48 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int u_nb;

	u_nb = (unsigned int)nb;
	if (nb < 0)
	{
		ft_putchar('-');
		u_nb = (unsigned int)(-nb);
	}
	if (u_nb >= 10)
		ft_putnbr(u_nb / 10);
	ft_putchar(u_nb % 10 + '0');
}

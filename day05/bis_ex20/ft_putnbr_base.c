/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/28 12:11:16 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check(int len, char *base)
{
	int i;
	int j;

	i = -1;
	if (len <= 1)
		return (1);
	while (++i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
	}
	i = -1;
	while (++i < len - 1)
	{
		j = i;
		while (++j < len)
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	u_nbr;
	int				len;

	len = 0;
	while (base[len])
		len++;
	if (ft_check(len, base) == 1)
		return ;
	u_nbr = (unsigned int)nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		u_nbr = (unsigned int)(-nbr);
	}
	if (u_nbr >= (unsigned int)len)
	{
		ft_putnbr_base(u_nbr / len, base);
	}
	ft_putchar(base[u_nbr % len]);
}

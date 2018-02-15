/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/15 18:26:32 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int s;
	int nb;

	s = 0;
	nb = 0;

	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if ( (s = *str == '-' ? -1 : 1)  == -1 || *str == '+' )
		str++;

	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str++ - '0');
	}

	return (nb * s);
}


	//Pour comprendre le ternaire ci dessus il faut penser a :
	//if ((i = 3) == (nb = 12))
	//
	//le if du haut est equivalente a ci dessous
	// if (str[i] == '-')
	// {
	// 	nb = -1;
	// 	i++;
	// }
	// else if (str[i] == '+')
	// {
	// 	nb = 1;
	// 	i++;
	// }

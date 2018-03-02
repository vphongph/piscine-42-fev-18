/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/03/02 00:05:06 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
	int i;
	int repeat;
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			repeat = str[i] - 'a' + 1;
			while (repeat-- > 0)
				write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			repeat = str[i] - 'A' + 1;
			while (repeat-- > 0)
				write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
	}

}


int		main(void)
{
	char str[21]= "abacadaba 42!";

	ft_repeat_alpha(str);
	write(1, "\n", 10);
}

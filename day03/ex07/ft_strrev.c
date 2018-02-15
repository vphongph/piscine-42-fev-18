/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/15 15:56:27 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		count;
	int		shift;

	tmp = str[0];
	count = 0;
	shift = 0;
	while (str[count])
		count++;
	while (shift < (count / 2))
	{
		tmp = str[shift];
		str[shift] = str[count - shift - 1];
		str[count - shift - 1] = tmp;
		shift++;
	}
	return (str);
}

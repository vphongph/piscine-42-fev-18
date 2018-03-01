/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/03/01 18:12:49 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_wrd(char *str)
{
	int i;
	int count;

	i = 0;

	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i])
			count++;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
			i++;
	}
	return (count);
}

int		ft_len_wrd(char *str);
{
	int i;
	int len;

	i = 0;

	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i])
			count++;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
			i++;
	}
	return (count);
}

int		ft_

int		main(int ac, char **av)
{
	if (ac != 1)
		return (0);
}

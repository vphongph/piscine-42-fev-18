/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/28 17:07:12 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int valid;

	if (ft_strlen(str) < ft_strlen(to_find))
		return ((void*)0);
	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		valid = 0;
		while (str[i] && str[i] == to_find[i])
		{
			i++;
			valid++;
			if (valid == ft_strlen(to_find))
				return (str);
		}
		str++;
	}
	return ((void*)0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/21 19:59:23 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int count;

	count = 0;
	while (src[count])
		count++;
	i = -1;
	while (src[++i] && i < n)
		dest[i] = src[i];
	if (n > count)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		while (dest[i])
			i++;
		dest[i] = '\0';
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/25 21:09:02 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUF_SIZE 1
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_size(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_compare1(char *size, char *str);
int		ft_compare2(char *size, char *str, int displayed);
void	ft_display1(int i, int j, char *size);
void	ft_display2(int i, int j, char *size);
void	ft_display3(int i, int j, char *size);
#endif

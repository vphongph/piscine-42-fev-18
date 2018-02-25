/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/25 23:33:35 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUF_SIZE 1
# include <unistd.h>
# include <stdlib.h>

int				ft_strlen(char *str);
char			*ft_size(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_compare1(char *size, char *str);
int				ft_compare2(char *size, char *str, int displayed);
void			ft_display1(int i, int j, char *size);
void			ft_display2(int i, int j, char *size);
void			ft_display3(int i, int j, char *size);
typedef struct	s_rush
{
	char	*str;
	int		index;
	int		largeur;
	int		hauteur;
}				t_rush;
t_rush			*ft_rush00(int largeur, int hauteur);
t_rush			*ft_rush01(int largeur, int hauteur);
t_rush			*ft_rush02(int largeur, int hauteur);
t_rush			*ft_rush03(int largeur, int hauteur);
t_rush			*ft_rush04(int largeur, int hauteur);
void			ft_export(t_rush *rush, char left, char mid, char right);
#endif

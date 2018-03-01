/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:55:25 by vphongph          #+#    #+#             */
/*   Updated: 2018/02/28 23:33:18 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUF_SIZE 409600
# define INIT_T_MAP(M) t_map M = {.s_x = 0, .s_y = 0, .r = 0, .c = 0, .stus = 1}
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_map
{
	int		line;
	int		len;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
	int		s_x;
	int		s_y;
	int		s_x_r;
	int		s_y_r;
	int		r;
	int		c;
	int		stus;
}				t_map;
void			ft_putchar(char c);
void			ft_exit(int e);
int				get_len_num(char *str, int index);
char			*read_file(char *file_name);
int				save_map(t_map *map_o, int *i, char *buf);
int				get_line_num(char *str, int *index, int size);
void			read_first_line(t_map *map_o, int *index, char *buf);
t_map			read_map(char *file_name);
int				check_square_point(t_map *map_o);
void			find_square(t_map *map_o);
void			draw_map(t_map *map_o);
void			print_map(t_map *map_o);
void			generate_map(t_map *map_o);
#endif

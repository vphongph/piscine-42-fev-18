# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 21:12:59 by vphongph          #+#    #+#              #
#    Updated: 2018/02/25 20:58:41 by vphongph         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = reader.c \ size_and_compare.c \ display.c

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all 
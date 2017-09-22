# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/28 13:42:51 by iprokofy          #+#    #+#              #
#    Updated: 2017/08/29 13:31:35 by abarnett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#
# created by: abarnett, iprokofy
#

NAME = bsq
FLAGS = -Wall -Wextra -Werror -O3
INCLUDES = ./includes
SRC = srcs/ft*.c

all:
	gcc $(FLAGS) -I$(INCLUDES) -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 09:36:02 by iprokofy          #+#    #+#              #
#    Updated: 2017/08/27 09:36:06 by iprokofy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRC = ft_main.c ft_str.c ft_parse.c

all: r00 r01 r02 r03 r04
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

r00:
	gcc -Wall -Wextra -Werror -o rush-00 rush00.c ft_str.c rush_all.c

r01:
	gcc -Wall -Wextra -Werror -o rush-01 rush01.c ft_str.c rush_all.c

r02:
	gcc -Wall -Wextra -Werror -o rush-02 rush02.c ft_str.c rush_all.c

r03:
	gcc -Wall -Wextra -Werror -o rush-03 rush03.c ft_str.c rush_all.c

r04:
	gcc -Wall -Wextra -Werror -o rush-04 rush04.c ft_str.c rush_all.c

clean:
	rm -f rush-00 rush-01 rush-02 rush-03 rush-04

fclean: clean
	rm -f $(NAME)

re: fclean all
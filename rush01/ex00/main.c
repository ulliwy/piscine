/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:14:01 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/19 18:14:04 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Created by: dhunter, iprokofy, thwhite
*/

#include <unistd.h>
#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_board(int board[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(board[i][j] + '0');
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	initialize_board(int board[9][9])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		board[9][9];

	initialize_board(board);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != '.')
				board[i - 1][j] = argv[i][j] - '0';
			j++;
		}
		i++;
	}
	if (solve(board))
		print_board(board);
	else
		ft_putstr("Error\n");
	return (0);
}

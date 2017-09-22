/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 13:43:49 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/12 13:43:51 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_eight_queens_puzzle(void);
void	initialize_board(int board[8][8]);
void	find_comb(int board[8][8], int col, int *nb);
int		is_safe(int board[8][8], int row, int col);
int		check_line(int board[8][8], int row, int col);

int		check_line(int board[8][8], int row, int col)
{
	int i;

	i = col;
	while (i >= 0)
	{
		if (board[row][i] == 1)
			return (0);
		i--;
	}
	return (1);
}

int		is_safe(int board[8][8], int row, int col)
{
	int i;
	int j;

	if (!check_line(board, row, col))
		return (0);
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 1)
			return (0);
		i--;
		j--;
	}
	i = row;
	j = col;
	while (j >= 0 && i < 8)
	{
		if (board[i][j] == 1)
			return (0);
		i++;
		j--;
	}
	return (1);
}

void	find_comb(int board[8][8], int col, int *nb)
{
	int i;

	if (col > 7)
	{
		(*nb)++;
		return ;
	}
	i = 0;
	while (i < 8)
	{
		if (is_safe(board, i, col))
		{
			board[i][col] = 1;
			find_comb(board, col + 1, nb);
		}
		board[i][col] = 0;
		i++;
	}
}

void	initialize_board(int board[8][8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int board[8][8];
	int nb;

	nb = 0;
	initialize_board(board);
	find_comb(board, 0, &nb);
	return (nb);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 09:47:02 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/20 09:47:04 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Created by: dhunter, iprokofy, thwhite
*/

#include "sudoku.h"

int		find_place(int board[9][9], int *row, int *col)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (board[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int		check_box(int board[9][9], int row, int col, int i)
{
	int		c;
	int		r;

	r = 0;
	while (r < 3)
	{
		c = 0;
		while (c < 3)
		{
			if (board[r + row][c + col] == i)
				return (0);
			c++;
		}
		r++;
	}
	return (1);
}

int		is_safe(int board[9][9], int i, int row, int col)
{
	int		c;
	int		r;

	c = 0;
	r = 0;
	while (c < 9)
	{
		if (board[row][c] == i)
			return (0);
		c++;
	}
	while (r < 9)
	{
		if (board[r][col] == i)
			return (0);
		r++;
	}
	if (!check_box(board, row - (row % 3), col - (col % 3), i))
		return (0);
	return (1);
}

int		solve(int board[9][9])
{
	int i;
	int row;
	int col;

	if (!find_place(board, &row, &col))
	{
		return (1);
	}
	i = 1;
	while (i <= 9)
	{
		if (is_safe(board, i, row, col))
		{
			board[row][col] = i;
			if (solve(board))
				return (1);
			board[row][col] = 0;
		}
		i++;
	}
	return (0);
}

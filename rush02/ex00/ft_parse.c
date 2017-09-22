/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 20:35:09 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/27 20:35:11 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	print_desc(char r, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putchar(r);
	ft_putstr("] [");
	ft_putchar(x + '0');
	ft_putstr("] [");
	ft_putchar(y + '0');
	ft_putstr("]");
}

void	print_comb(int type, int x, int y)
{
	if (type == 24)
	{
		print_desc('2', x, y);
		ft_putstr(" || ");
		print_desc('4', x, y);
	}
	if (type == 34)
	{
		print_desc('3', x, y);
		ft_putstr(" || ");
		print_desc('4', x, y);
	}
	if (type == 234)
	{
		print_desc('2', x, y);
		ft_putstr(" || ");
		print_desc('3', x, y);
		ft_putstr(" || ");
		print_desc('4', x, y);
	}
}

void	print_row_r(int type, int x, int y)
{
	if (type == -1)
		ft_putstr("aucune");
	if (type == 0)
		print_desc('0', x, y);
	if (type == 1)
		print_desc('1', x, y);
	if (type == 2)
		print_desc('2', x, y);
	if (type == 3)
		print_desc('3', x, y);
	if (type == 4)
		print_desc('4', x, y);
	if (type == 24 || type == 34 || type == 234)
		print_comb(type, x, y);
	ft_putstr("\n");
}

int		check_rush(t_square *sq, int x, int y)
{
	int	type;

	type = -1;
	if (sq->lt == 'o')
		type = 0;
	else if (sq->lt == '/')
		type = 1;
	else if (sq->lt == 'A' && sq->rt == 'A' && sq->lb == 'C')
		type = 2;
	else if (sq->lt == 'A' && sq->rt == 'C' && sq->lb == 'A')
		type = 3;
	else if (sq->lt == 'A' && sq->rt == 'C' && sq->lb == 'C')
		type = 4;
	else if (sq->lt == 'A' && sq->lb == 'C')
		type = 24;
	else if (sq->lt == 'A' && sq->rt == 'C')
		type = 34;
	else
		type = 234;
	print_row_r(type, x, y);
	return (0);
}

int		get_mid_param(t_square *sq, int *y, char *c, int x)
{
	int		i;

	if ((*c == '|' || *c == 'B' || *c == '*'))
	{
		i = 0;
		(sq)->vb = *c;
		while (*c == (sq)->vb)
		{
			if (!check_row(sq, x))
			{
				return (0);
			}
			read(0, c, 1);
			(*y)++;
		}
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:32:51 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/27 19:32:54 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	print_row(char top_char, char mid_char, char bott_char, int n_chars)
{
	int		i;
	int		n_mid_chars;

	if (n_chars >= 1)
	{
		ft_putchar(top_char);
	}
	n_mid_chars = n_chars - 2;
	i = 0;
	while (i < n_mid_chars)
	{
		ft_putchar(mid_char);
		i++;
	}
	if (n_chars >= 2)
	{
		ft_putchar(bott_char);
	}
	ft_putchar('\n');
}

void	print_toprow(int n_columns)
{
	print_row('/', '*', '\\', n_columns);
}

void	print_midrow(int n_columns)
{
	print_row('*', ' ', '*', n_columns);
}

void	print_bottrow(int n_columns)
{
	print_row('\\', '*', '/', n_columns);
}

int		main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}

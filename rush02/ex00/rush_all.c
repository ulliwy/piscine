/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:43:09 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/27 19:43:11 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	rush(int n_columns, int n_rows)
{
	int		i;
	int		n_midrows;

	if (n_rows >= 1)
	{
		print_toprow(n_columns);
	}
	n_midrows = n_rows - 2;
	i = 0;
	while (i < n_midrows)
	{
		print_midrow(n_columns);
		i++;
	}
	if (n_rows >= 2)
	{
		print_bottrow(n_columns);
	}
}

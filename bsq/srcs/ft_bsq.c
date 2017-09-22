/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 10:44:07 by abarnett          #+#    #+#             */
/*   Updated: 2017/08/29 17:37:48 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** created by: abarnett, iprokofy
*/

#include "ft_bsq.h"

int		g_biggest;
int		g_max_i;
int		g_max_j;

int		ft_min(int a, int b, int c)
{
	int		m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	draw_sq(int i, int j, char *buff, int v_line)
{
	while (i > 0)
	{
		buff[i * v_line - 1] = '\n';
		i--;
	}
	i = g_max_i;
	while (i > g_max_i - g_biggest)
	{
		j = g_max_j;
		while (j > g_max_j - g_biggest)
		{
			buff[i * v_line + j] = g_full;
			j--;
		}
		i--;
	}
}

void	print_sol(int *matrix)
{
	int		j;
	int		i;
	char	*buff;
	int		v_line;

	v_line = g_m + 1;
	buff = malloc(g_n * v_line + 1);
	i = 0;
	while (i < g_n)
	{
		j = 0;
		while (j < g_m)
		{
			if (matrix[i * g_m + j] == 0)
				buff[i * v_line + j] = g_obstacle;
			else
				buff[i * v_line + j] = g_empty;
			j++;
		}
		i++;
	}
	draw_sq(i, j, buff, v_line);
	buff[g_n * v_line] = 0;
	ft_putstr(buff);
	free(buff);
}

void	bsq_solve(int *matrix, int i, int j)
{
	g_max_i = 0;
	g_max_j = 0;
	g_biggest = 0;
	while (i < g_n)
	{
		j = 0;
		while (j < g_m)
		{
			if (matrix[i * g_m + j] == 1)
			{
				if (i > 0 && j > 0)
					matrix[i * g_m + j] = ft_min(matrix[(i - 1) * g_m + j],
						matrix[i * g_m + j - 1],
						matrix[(i - 1) * g_m + j - 1]) + 1;
				if (matrix[i * g_m + j] > g_biggest)
				{
					g_biggest = matrix[i * g_m + j];
					g_max_i = i;
					g_max_j = j;
				}
			}
			j++;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 16:45:32 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/30 16:44:00 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** created by: abarnett, iprokofy
*/

#include "ft_bsq.h"

int		read_input(int fd, char **tmp_out)
{
	int		expected_len;
	char	*tmp;
	int		len;
	char	*ptr;

	expected_len = (g_m + 1) * (g_n - 1);
	tmp = malloc(expected_len);
	ptr = tmp;
	while (expected_len)
	{
		len = read(fd, ptr, expected_len);
		if (len == 0 || len == -1)
			return (0);
		expected_len -= len;
		ptr += len;
	}
	*tmp_out = tmp;
	return (1);
}

int		set_matrix_values(int *i, int *j, char *ptr, int *matrix)
{
	while (*j <= g_m && *i < g_n)
	{
		if (*ptr == '\n')
		{
			if (*j != g_m)
				return (0);
			(*i)++;
			(*j) = 0;
			ptr++;
			continue;
		}
		if (*ptr == g_empty)
			matrix[*i * g_m + *j] = 1;
		else if (*ptr == g_obstacle)
			matrix[*i * g_m + *j] = 0;
		else if (*ptr != g_obstacle && *ptr != g_empty)
			return (0);
		(*j)++;
		ptr++;
	}
	return (1);
}

int		fill_matrix(int *matrix, int fd)
{
	int		j;
	int		i;
	char	*tmp;
	char	*ptr;

	if (!read_input(fd, &tmp))
		return (0);
	ptr = tmp;
	j = 0;
	i = 1;
	if (!set_matrix_values(&i, &j, ptr, matrix))
		return (0);
	free(tmp);
	if (i != g_n || read(fd, &tmp, 1))
		return (0);
	return (1);
}

int		init_matrix(int fd, int *matrix)
{
	int		j;
	char	*cpy;

	j = 0;
	cpy = g_buff;
	while (*g_buff)
	{
		if (*g_buff == g_empty)
			matrix[j] = 1;
		else
			matrix[j] = 0;
		j++;
		g_buff++;
	}
	free(cpy);
	if (!fill_matrix(matrix, fd))
		return (0);
	bsq_solve(matrix, 0, 0);
	print_sol(matrix);
	return (1);
}

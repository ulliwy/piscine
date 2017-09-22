/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 10:44:58 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/30 16:42:55 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** created by: abarnett, iprokofy
*/

#include "ft_bsq.h"
#include <fcntl.h>

int		parse_row(int fd)
{
	char	c;
	int		size;
	int		ret;

	g_m = 0;
	size = 100;
	g_buff = (char*)malloc(sizeof(char) * size + 1);
	ret = read(fd, &c, 1);
	if (ret != 1)
		return (0);
	while (c && c != '\n')
	{
		if (c != g_empty && c != g_obstacle)
			return (0);
		if (g_m >= size)
		{
			size *= 2;
			g_buff = re_alloc(g_buff, g_m, size + 1);
		}
		g_buff[g_m] = c;
		g_m++;
		read(fd, &c, 1);
	}
	g_buff[g_m] = '\0';
	return (1);
}

int		parse_1(int fd, int *val)
{
	char	c;
	int		depth;
	int		is_digit;

	is_digit = 0;
	if (read(fd, &c, 1) != 1 || c == '\n')
		return (0);
	if (c >= '0' && c <= '9')
	{
		is_digit = 1;
		*val = *val * 10 + (c - '0');
	}
	depth = parse_1(fd, val);
	if (depth == -1)
		return (-1);
	set_symbols(c, depth);
	if (depth >= 3 && !is_digit)
		return (0);
	if (depth < 3 && is_digit)
		*val = *val / 10;
	return (depth + 1);
}

int		parse_argv(int fd)
{
	int		value;

	value = 0;
	if (parse_1(fd, &value) == -1)
		return (-1);
	if (!parse_row(fd))
		return (-1);
	if (g_full == g_obstacle || g_full == g_empty || g_obstacle == g_empty)
		return (-1);
	return (value);
}

void	run_solve(int fd)
{
	int *matrix;

	g_n = parse_argv(fd);
	matrix = (int*)malloc((sizeof(int)) * (g_m * g_n));
	if (g_n <= 0 || g_m <= 0 || !init_matrix(fd, matrix))
		ft_putstr("map error\n");
	free(matrix);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;

	i = 1;
	if (argc < 2)
	{
		run_solve(0);
	}
	while (i < argc)
	{
		g_empty = 0;
		g_obstacle = 0;
		g_full = 0;
		fd = open(argv[i], O_RDONLY);
		run_solve(fd);
		close(fd);
		i++;
	}
}

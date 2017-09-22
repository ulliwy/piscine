/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:15:50 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/23 17:15:52 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "ft_tail.h"

#define BUF_SIZE 4096

void	ft_no_file(char *filename, int first)
{
	if (!first)
		ft_putstr("\n");
	ft_putstr("ft_tail: ");
	ft_putstr(filename);
	ft_putstr(" No such file or directory");
}

int		ft_print_file(char *filename, int offset, int first)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_no_file(filename, first);
		return (1);
	}
	if (offset > 0)
		lseek(fd, offset - 1, SEEK_SET);
	if (offset < 0)
		lseek(fd, offset, SEEK_END);
	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}

void	ft_print_headers(int i, char *argv)
{
	if (i > 3)
		ft_putstr("\n");
	ft_putstr("==> ");
	ft_putstr(argv);
	ft_putstr(" <==\n");
}

int		ft_check_opt(char **argv, int *i, int *parsed, int *offset)
{
	if (argv[*i][0] == '-' && !(*parsed))
	{
		if (argv[*i][1] == 'c')
		{
			*parsed = 1;
			if (!ft_atoi(argv[*i + 1], offset))
				return (0);
			*i = *i + 2;
		}
		else
		{
			if (*i > 1)
				ft_putstr("\n");
			ft_putstr("usage: ft_tail -c # [file ...]\n");
			return (0);
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		offset;
	int		parsed;
	int		first;

	i = 1;
	offset = 0;
	parsed = 0;
	first = 1;
	while (i < argc)
	{
		if (!ft_check_opt(argv, &i, &parsed, &offset))
			return (0);
		if (argc > 4 && i > 2)
			ft_print_headers(i, argv[i]);
		ft_print_file(argv[i], offset, first);
		first = 0;
		i++;
	}
}

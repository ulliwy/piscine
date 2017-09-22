/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 13:59:16 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/23 13:59:18 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_stdin(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = read(0, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(0, buf, BUF_SIZE);
	}
}

void	ft_cat(int fd, char *argv, char buf[BUF_SIZE + 1])
{
	int ret;

	if (fd == -1)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(argv);
		ft_putstr(": No such file or directory\n");
		return ;
	}
	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUF_SIZE);
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			ft_stdin();
		else
		{
			fd = open(argv[i], O_RDONLY);
			ft_cat(fd, argv[i], buf);
			if (close(fd) == -1)
				return (1);
		}
		i++;
	}
	return (0);
}

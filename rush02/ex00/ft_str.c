/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 09:55:24 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/27 09:55:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int				buff[10];
	int				i;
	unsigned int	u_nb;

	if (nb == 0)
		ft_putchar('0');
	u_nb = nb;
	if (nb < 0)
	{
		u_nb = -u_nb;
		ft_putchar('-');
	}
	i = 0;
	while (u_nb != 0)
	{
		buff[i] = (u_nb % 10);
		u_nb = u_nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(buff[i] + '0');
		i--;
	}
}

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
	{
		sign = 1;
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (sign * value);
		value = value * 10 + (*str - '0');
		str++;
	}
	return (sign * value);
}

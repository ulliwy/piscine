/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 09:40:47 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/24 09:40:49 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include <stdio.h>

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

int		ft_get_sign(char **str, int *sign)
{
	int		spaces;

	*sign = -1;
	spaces = 0;
	while (**str == ' ')
	{
		spaces = 1;
		(*str)++;
	}
	if (**str == '+' || **str == '-')
	{
		if (**str == '+' && spaces)
			*sign = -1;
		if (**str == '+' && !spaces)
			*sign = 1;
		if (**str == '-' && spaces)
			return (0);
		if (**str == '-')
			*sign = -1;
		(*str)++;
	}
	return (1);
}

int		ft_atoi(char *str, int *offset)
{
	int		value;
	int		sign;
	char	*copy;

	copy = str;
	if (!ft_get_sign(&str, &sign))
		return (0);
	value = 0;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			ft_putstr("tail: illegal offset -- ");
			ft_putstr(copy);
			ft_putstr("\n");
			return (0);
		}
		value = value * 10 + (*str - '0');
		str++;
	}
	*offset = sign * value;
	return (1);
}

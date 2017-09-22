/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:51:43 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/21 13:51:45 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		validation(char op, int v2)
{
	if (op == '/' && v2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (op == '%' && v2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

void	solve(int v1, char op, int v2)
{
	t_functions		arr[5];

	arr[0] = &sum;
	arr[1] = &sub;
	arr[2] = &mul;
	arr[3] = &div;
	arr[4] = &mod;
	if (!(validation(op, v2)))
		return ;
	if (op == '+')
		ft_putnbr((arr[0])(v1, v2));
	if (op == '-')
		ft_putnbr(arr[1](v1, v2));
	if (op == '*')
		ft_putnbr(arr[2](v1, v2));
	if (op == '/')
		ft_putnbr(arr[3](v1, v2));
	if (op == '%')
		ft_putnbr(arr[4](v1, v2));
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		value1;
	int		value2;
	char	op;
	int		i;

	if (argc != 4)
		return (0);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	i = 0;
	if (argv[2][1] != '\0')
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	op = argv[2][0];
	solve(value1, op, value2);
}

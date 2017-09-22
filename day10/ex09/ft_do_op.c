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

#include "ft_opp.h"
#include <stdio.h>

int		validation(char *op, int v2)
{
	if (ft_strcmp(op, "/") == 0 && v2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (ft_strcmp(op, "/") == 0 && v2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

void	solve(int v1, char *op, int v2)
{
	int		i;
	int		found;

	if (!validation(op, v2))
		return ;
	i = 0;
	found = 0;
	while (i < 5)
	{
		if (ft_strcmp(op, g_opptab[i].s) == 0)
		{
			ft_putnbr(g_opptab[i].f(v1, v2));
			found = 1;
		}
		i++;
	}
	if (!found)
		ft_putstr("error : only [ - + * / % ] are accepted.");
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		value1;
	int		value2;

	if (argc != 4)
		return (0);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	solve(value1, argv[2], value2);
}

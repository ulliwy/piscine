/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 09:07:49 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/26 09:07:50 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ev_expr.h"

int		doop(char op, int v1, int v2)
{
	if (op == '+')
		return (v2 + v1);
	if (op == '-')
		return (v2 - v1);
	if (op == '*')
		return (v2 * v1);
	if (op == '/')
		return (v2 / v1);
	if (op == '%')
		return (v2 % v1);
	return (0);
}

void	ft_parse_ops(char str, t_list **values, t_list **operators)
{
	if (str == ')')
	{
		while ((int)(*operators)->data != '(')
			ft_list_push_front(values,
				(void *)(intptr_t)doop((char)ft_list_pop(operators),
					(int)ft_list_pop(values), (int)ft_list_pop(values)));
		ft_list_pop(operators);
	}
	else
	{
		while (*operators && ft_same_prio(str, (char)(*operators)->data))
			ft_list_push_front(values,
					(void *)(intptr_t)doop((char)ft_list_pop(operators),
						(int)ft_list_pop(values), (int)ft_list_pop(values)));
		ft_list_push_front(operators, (void*)(intptr_t)str);
	}
}

void	ft_parse_str(char *str, t_list **values, t_list **operators)
{
	int		value;

	while (*str)
	{
		value = 0;
		if (*str == ' ')
		{
			str++;
			continue;
		}
		if (*str >= '0' && *str <= '9')
		{
			ft_push_nbr(values, &str);
			continue;
		}
		if (*str == '(')
			ft_list_push_front(operators, (void *)(intptr_t)*str);
		else if (*str == '+' || *str == '-' || *str == '*'
			|| *str == '/' || *str == '%' || *str == ')')
			ft_parse_ops(*str, values, operators);
		str++;
	}
}

int		eval_expr(char *str)
{
	t_list	*values;
	t_list	*operators;

	values = NULL;
	operators = NULL;
	ft_parse_str(str, &values, &operators);
	while (operators)
		ft_list_push_front(&values,
			(void *)(intptr_t)doop((char)ft_list_pop(&operators),
				(int)ft_list_pop(&values), (int)ft_list_pop(&values)));
	return ((int)values->data);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}

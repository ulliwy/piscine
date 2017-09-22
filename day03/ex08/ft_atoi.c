/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:47:54 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/11 10:47:58 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		ft_atoi(char *str)
{
	int value;
	int first;
	int is_neg;

	value = 0;
	first = 0;
	is_neg = 0;
	if (*str == '-')
	{
		is_neg = 1;
		str++;
	}
	while (*str)
	{
		value = value * 10 * first + (*str - '0');
		first = 1;
		str++;
	}
	if (is_neg)
	{
		return (-value);
	}
	return (value);
}

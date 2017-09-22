/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 21:03:01 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/17 21:03:03 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_time(int is_pm_f, int is_pm_s, int hour, int second)
{
	char	*pm;
	char	*am;

	pm = "P.M.";
	am = "A.M.";
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (is_pm_f && is_pm_s)
		printf("%d.00 %s AND %d.00 %s\n", hour, pm, second, pm);
	if (is_pm_f && !(is_pm_s))
		printf("%d.00 %s AND %d.00 %s\n", hour, pm, second, am);
	if (!(is_pm_f) && is_pm_s)
		printf("%d.00 %s AND %d.00 %s\n", hour, am, second, pm);
	if (!(is_pm_f) && (!is_pm_s))
		printf("%d.00 %s AND %d.00 %s\n", hour, am, second, am);
}

void	ft_takes_place(int hour)
{
	int		is_pm_f;
	int		is_pm_s;
	int		second;

	is_pm_f = 0;
	is_pm_s = 0;
	second = hour + 1;
	if (hour >= 12 && hour < 24)
	{
		is_pm_f = 1;
		hour = hour - 12;
	}
	if (hour == 0 || hour == 24)
		hour = 12;
	if (second >= 12 && second < 24)
	{
		is_pm_s = 1;
		second = second - 12;
	}
	if (second == 24 || second == 0)
		second = 12;
	if (second > 24)
		second = second - 24;
	print_time(is_pm_f, is_pm_s, hour, second);
}

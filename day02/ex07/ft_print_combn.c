/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:06:47 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/09 19:06:50 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		check(int *arr, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		if (arr[i] >= arr[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	print_cur(int *arr, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	show_comb(int *first, int *arr, int n)
{
	if (*first)
	{
		print_cur(arr, n);
		*first = 0;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
		print_cur(arr, n);
	}
}

void	wrapper(int n, int power, int limit)
{
	int i;
	int arr[n];
	int cur;
	int first;

	i = 0;
	first = 1;
	while (i < limit)
	{
		power = n;
		cur = i;
		while (power > 0)
		{
			arr[power - 1] = cur % 10;
			cur = cur / 10;
			power--;
		}
		if (check(arr, n))
		{
			show_comb(&first, arr, n);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	int power;
	int limit;

	power = n;
	limit = 1;
	while (power > 0)
	{
		limit = limit * 10;
		power--;
	}
	wrapper(n, power, limit);
}

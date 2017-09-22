/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdey <tdey@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:40:13 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/12 15:40:16 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Created by: tdey, iprokofy, cwatson
*/

void	rush(int x, int y);
int		ft_putchar(char c);

void	print_row(int x, char c1, char c2);

void	print_row(int x, char f_l, char m)
{
	int i;

	i = 1;
	ft_putchar(f_l);
	while (i < x - 1)
	{
		ft_putchar(m);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(f_l);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	i = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
		{
			print_row(x, 'o', '-');
		}
		else
		{
			print_row(x, '|', ' ');
		}
		i++;
	}
	return ;
}

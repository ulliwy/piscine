/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:14:50 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/09 14:14:54 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void);
int		ft_putchar(char c);

void	print_nmbr(int i, int j, int k)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j > i && j <= 9)
		{
			k = j + 1;
			while (k > j && k <= 9)
			{
				print_nmbr(i, j, k);
				if (!(i == 7 && j == 8 && k == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

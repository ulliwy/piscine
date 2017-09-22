/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 09:10:48 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/26 09:10:51 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		ft_same_prio(char c1, char c2)
{
	if (c2 == '(' || c2 == ')')
		return (0);
	if ((c1 == '*' || c1 == '/' || c1 == '%') && (c2 == '+' || c2 == '-'))
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:04:52 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/09 18:04:56 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_putchar(char c);

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

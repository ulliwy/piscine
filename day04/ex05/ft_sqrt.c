/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:26:26 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/11 14:26:29 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int i;
	int div;
	int nb_p;

	nb_p = nb;
	div = 1;
	while (nb_p / 10 != 0)
	{
		div++;
		nb_p = nb_p / 10;
	}
	if (nb < 0)
	{
		return (0);
	}
	i = 0;
	while (i <= nb / div / 2 + 1)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

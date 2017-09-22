/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:07:43 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/12 09:07:47 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);

int		ft_is_prime(int nb)
{
	int i;
	int w;

	if (nb == 2 || nb == 3 || nb == 2147483647)
	{
		return (1);
	}
	if (nb == 0 || nb == 1 || nb < 0 || (nb % 2 == 0) || (nb % 3 == 0))
	{
		return (0);
	}
	i = 5;
	w = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += w;
		w = 6 - w;
	}
	return (1);
}

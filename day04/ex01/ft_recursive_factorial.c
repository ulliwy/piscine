/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:15:18 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/11 13:15:21 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return ((nb * ft_recursive_factorial(nb - 1)));
}

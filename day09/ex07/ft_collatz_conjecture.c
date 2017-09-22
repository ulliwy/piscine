/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 13:08:18 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/18 13:08:20 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			calc_steps(unsigned int base, unsigned int *i)
{
	if (base == 1)
		return ;
	if (base % 2 == 0)
	{
		(*i)++;
		calc_steps((base / 2), i);
	}
	else
	{
		calc_steps((3 * base + 1), i);
		(*i)++;
	}
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int i;

	i = 0;
	calc_steps(base, &i);
	return (i);
}

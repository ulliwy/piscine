/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 11:22:34 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/18 11:22:37 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((i >= k && i <= j) || (i >= j && i <= k))
		return (i);
	if ((j >= k && j <= i) || (j >= i && j <= k))
		return (j);
	if ((k >= j && k <= i) || (k >= i && k <= j))
		return (k);
	return (i);
}

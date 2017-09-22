/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 12:10:38 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/09 12:10:47 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

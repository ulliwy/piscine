/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 09:35:17 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/14 09:35:19 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char test[95];
	int i = 0;
	while (i < 95)
	{
		test[i] = i + 32;
		//printf("%d:   ", i + 32);
		//printf("%c\n", test[i]);
		i++;
	}
	ft_putnbr_base(200000000, "0123456789ABC");
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 09:57:42 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/13 09:57:44 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sastantua(int size);
int		ft_putchar(char c);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

int		main(void)
{
	sastantua(5);
	return (0);
}

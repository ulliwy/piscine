/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:02:33 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/11 13:02:35 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_eight_queens_puzzle_2(void);


int		ft_putchar(char);

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main()
{
	ft_eight_queens_puzzle_2();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:05:37 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/17 18:05:39 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_show_tab(struct s_stock_par* par);

int main()
{
	t_stock_par		stuff[2];
	char 			*test[] = {"lol", "hijack", 0};

	stuff[0].size_param = 0;
	stuff[0].str = "hello world!";
	stuff[0].copy = "hello world!";
	stuff[0].tab = test;
	
	stuff[1].str = 0;

	ft_show_tab(stuff);
}

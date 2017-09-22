/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:48:56 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/09 13:49:01 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *);
int ft_putchar(char);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main()
{
	char *str = "This is string";
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
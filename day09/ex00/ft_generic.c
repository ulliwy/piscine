/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 20:50:38 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/17 20:50:41 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_generic(void)
{
	char *str;

	str = "Tut tut ; Tut tut\n";
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	return ;
}

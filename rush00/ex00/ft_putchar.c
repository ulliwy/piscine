/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdey <tdey@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:40:13 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/12 15:40:16 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Created by: tdey, iprokofy, cwatson
*/

#include <unistd.h>

int		ft_putchar(char c);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

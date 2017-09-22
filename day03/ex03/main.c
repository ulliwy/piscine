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

#include <stdio.h>
void ft_div_mod(int, int, int *, int *);

int main()
{
	int a = 13;
	int b = 7;
	int div = 0;
	int mod = 0;

	printf("a: %d, b: %d\n", div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d\n", div, mod);
	return (0);
}
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
void ft_swap(int *, int *);

int main()
{
	int a = 5;
	int b = 10;
	printf("a: %d, b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	return (0);
}
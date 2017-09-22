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
void ft_sort_integer_table(int *tab, int size);

int main()
{
	int tab[] = {4, 3};
	int size = 2;
	int i = 0;
	ft_sort_integer_table(tab, size);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

	return (0);
}
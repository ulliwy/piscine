/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:29:00 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/21 13:29:03 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		foo(int i, int j)
{
	if (i < j)
		return (-1);
	if (i == j)
		return (0);
	return (1);
}

int main()
{
	int		tab[] = {5, 1};

	printf("%d\n", ft_is_sort(tab, 2, &foo));
}

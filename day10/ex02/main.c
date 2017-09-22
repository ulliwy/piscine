/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:54:25 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/21 11:54:27 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		add(int i)
{
	return (i + 1);
}

int		*ft_map(int *tab, int length, int (*f)(int));

int		main()
{
	int i;

	int tab[] = {1, 2, 33};
	int *arr;
	arr = ft_map(tab, 3, &add);
	i = 0;
	while (i < 3)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}

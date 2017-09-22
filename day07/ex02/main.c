/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:38:50 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/16 15:38:52 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main()
{
	unsigned int i;
	unsigned int size;
	int min = -4;
	int max = 200;
	int *range = 0;

	ft_ultimate_range(&range, min, max);
	size = max - min;
	i = 0;
	if (range == 0)
		printf("no\n");
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n%u\n", ft_ultimate_range(&range, min, max));
	return (0);
}

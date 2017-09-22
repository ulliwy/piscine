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

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);

int		main()
{
	int *arr;
	unsigned int i;
	unsigned int size;
	int min = -5;
	int max = 2147483647;

	arr = ft_range(min, max);
	size = max - min;
	i = 0;
	if (arr == 0)
		printf("no");
	printf("%d\n", arr[2147483640]);
	printf("\n");
	return (0);
}

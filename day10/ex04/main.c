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

int		ft_count_if(char **tab, int (*f)(char*));

int		if_z(char *c)
{
	if (*c)
		return (1);
	return (0);
}

int		main()
{
	char	*arr[3] = {"", "", 0};

	printf("%d\n", ft_count_if(arr, &if_z));
}

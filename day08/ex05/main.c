/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:00:47 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/17 15:00:49 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
char	**ft_split_whitespaces(char *str);

int main(int argc, char **argv)
{
	t_stock_par	*ret;
	int i;

	i = 0;
	ret = ft_param_to_tab(argc, argv);
	while (i < argc)
	{
		printf("%d\n", ret[i].size_param);
		i++;
	}
	if (ret[argc].str == 0)
		printf("yes\n");
	return (0);
}
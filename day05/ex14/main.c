/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 09:35:17 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/14 09:35:19 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int 	ft_str_is_uppercase(char *str);

int		main(void)
{
	char str1[] = "DKJFHGBSJFHGBLSJFHD";
	char str2[] = "GHJLFGJhfg";
	char str3[] = "SDFGSD, FGS";
	char str4[] = "";
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
	return 0;
}

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
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char str11[5] = "tyuq";
	char str21[10] = "";
	char str12[5] = "tyuq";
	char str22[10] = "";
	printf("%d\n", ft_strlcpy(str11, str21, 0));
	printf("%lu\n", strlcpy(str12, str22, 0));
	printf("-------\n");
	printf("%s\n", str11);
	printf("%s\n", str12);
	return 0;
}

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char test1[256] = "qwe";
	char str21[] = "qwe";
	char test2[256] = "qwe";
	char str22[] = "qwe";
	printf("%d\n", ft_strlcat(test1, str21, 2));
	printf("%lu\n", strlcat(test2, str22, 2));
	printf("-------\n");
	printf("%s\n", test1);
	printf("%s\n", test2);
	return 0;
}

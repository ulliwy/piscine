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

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char test1[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
	char str21[] = "asdf";
	char test2[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
	char str22[] = "asdf";
	printf("%s\n", ft_strncat(test1, str21, 3));
	printf("%s\n", strncat(test2, str22, 3));
	return 0;
}

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

char	*ft_strcpy(char *dest, char * src);

int		main(void)
{
	char dest1[] = "1234";
	char src1[] = "qwerty";
	//char dest2[] = "1234";
	//char src2[] = "qwerty";

	printf("%s\n", dest1);
	printf("%s\n", src1);
	printf("------\n");

	printf("%s\n", ft_strcpy(dest1, src1));
	//printf("%s\n", strcpy(dest1, src1));
	return 0;
}

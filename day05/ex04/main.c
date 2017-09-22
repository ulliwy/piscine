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

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest1[] = "1234567";
	char src1[] = "abcd";
	char dest2[] = "1234567";
	char src2[] = "abcd";
	printf("%s\n", dest1);
	printf("%s\n", src1);
	printf("-------\n");
	ft_strncpy(dest2, src2, 4);
	//strncpy (dest2, src2, 4);
	//puts (dest1);
	puts (dest2);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 18:41:49 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/16 18:41:52 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *ret;

	ret = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (ret);
}

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

int		calc_size(int argc, char **argv)
{
	int i;
	int size;

	size = 0;
	i = 1;
	while (i < argc)
	{
		size += ft_strlen(argv[i]);
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*str;
	int		i;
	char	*ret;

	size = calc_size(argc, argv);
	str = (char *)malloc(size * sizeof(char) + 1);
	ret = str;
	i = 1;
	while (i < argc)
	{
		ft_strcpy(str, argv[i]);
		str += ft_strlen(argv[i]);
		if (i != argc - 1)
		{
			*str = '\n';
			str++;
		}
		i++;
	}
	*str = '\0';
	return (ret);
}

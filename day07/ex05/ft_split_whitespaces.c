/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 19:59:52 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/16 19:59:54 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int		is_space(char c)
{
	if (c == 32 || c == 9 || c == 11 || c == 10 || c == 13)
		return (1);
	return (0);
}

int		calc_size(char *str)
{
	int		i;

	i = 0;
	while (is_space(*str))
		str++;
	while (*str)
	{
		if (is_space(*str) && !is_space(*(str + 1)) && *(str + 1) != '\0')
		{
			i++;
		}
		str++;
	}
	return (i + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	*tbl;
	char	**arr;
	int		arr_size;
	int		i;

	arr_size = calc_size(str);
	arr = (char **)malloc((arr_size + 1) * sizeof(char *));
	tbl = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	tbl = ft_strcpy(tbl, str);
	i = 0;
	while (is_space(*tbl))
		tbl++;
	while (i < arr_size)
	{
		arr[i] = tbl;
		while (*tbl && !(is_space(*tbl)))
			tbl++;
		*tbl = '\0';
		tbl++;
		while (*tbl && is_space(*tbl))
			tbl++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}

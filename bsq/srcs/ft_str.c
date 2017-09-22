/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 13:34:18 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/30 16:48:57 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** created by: abarnett, iprokofy
*/

#include "ft_bsq.h"

void	ft_putstr(char *str)
{
	char *start;

	start = str;
	while (*str)
	{
		str++;
	}
	write(1, start, str - start);
}

char	*ft_memcpy(char *dest, char *src, int size)
{
	char *ret;

	ret = dest;
	while (size--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ret);
}

char	*re_alloc(char *str, int old_size, int new_size)
{
	char	*new_str;

	new_str = (char*)malloc(new_size);
	ft_memcpy(new_str, str, old_size);
	free(str);
	return (new_str);
}

void	set_symbols(char c, int depth)
{
	if (depth == 0)
		g_full = c;
	else if (depth == 1)
		g_obstacle = c;
	else if (depth == 2)
		g_empty = c;
}

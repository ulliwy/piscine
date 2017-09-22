/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 09:38:37 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/27 09:38:39 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <stdlib.h>

int		get_last_param(char *c, t_square *sq, int *len)
{
	if (*c == '-' || *c == '*' || *c == 'B')
	{
		sq->hb = *c;
		while (*c == sq->hb)
		{
			(*len)++;
			read(0, c, 1);
		}
	}
	if (*c == '\0' || *c == '\n')
		return (0);
	sq->rt = *c;
	(*len)++;
	read(0, c, 1);
	return (1);
}

int		get_param(t_square *sq)
{
	int		len;
	char	c;

	len = 0;
	if (!read(0, &c, 1))
		return (0);
	sq->lt = c;
	len++;
	read(0, &c, 1);
	if (c == '\n' || c == '\0')
		return (len);
	if (c == sq->lt)
	{
		read(0, &c, 1);
		if (c != '\n' || c != '\0')
		{
			sq->rt = sq->lt;
			return (len + 1);
		}
	}
	if (!get_last_param(&c, sq, &len))
		return (0);
	if (!c || c == '\n')
		return (len);
	return (-1);
}

int		check_row(t_square *sq, int x)
{
	char	c;
	int		i;

	i = 1;
	while (i < x - 1)
	{
		read(0, &c, 1);
		if (c != ' ')
			return (0);
		i++;
	}
	if (x > 1)
	{
		read(0, &c, 1);
		if (c != sq->vb)
			return (0);
	}
	read(0, &c, 1);
	if (!c && c != '\n')
		return (0);
	return (1);
}

int		get_last(t_square *sq, int x)
{
	int		i;
	char	c;

	i = 1;
	while (i < x - 1)
	{
		read(0, &c, 1);
		if (c != sq->hb)
			return (0);
		i++;
	}
	read(0, &c, 1);
	if (!c)
		return (0);
	sq->rb = c;
	read(0, &c, 1);
	if (!c && c != '\n')
		return (0);
	return (1);
}

int		main(void)
{
	int			x;
	int			y;
	t_square	sq;
	char		c;

	x = get_param(&sq);
	if (x < 1)
	{
		ft_putstr("aucune\n");
		return (-1);
	}
	y = 1;
	read(0, &c, 1);
	if (!c)
		return (check_rush(&sq, x, y));
	if (!get_mid_param(&sq, &y, &c, x))
		return (0);
	if (!c)
		return (check_rush(&sq, x, y));
	y++;
	(&sq)->lb = c;
	if (!get_last(&sq, x))
		return (0);
	check_rush(&sq, x, y);
	return (0);
}

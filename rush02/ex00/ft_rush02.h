/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 09:54:38 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/27 09:54:40 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

# include <unistd.h>

typedef struct		s_square
{
	char			lt;
	char			rt;
	char			lb;
	char			rb;
	char			hb;
	char			vb;
}					t_square;

void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_atoi(char *str);
void				rush(int n_columns, int n_rows);
void				print_toprow(int n_columns);
void				print_midrow(int n_columns);
void				print_bottrow(int n_columns);
int					check_rush(t_square *sq, int x, int y);
void				print_row_r(int type, int x, int y);
int					get_mid_param(t_square *sq, int *y, char *c, int x);
int					check_row(t_square *sq, int x);

#endif

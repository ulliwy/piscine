/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 13:35:29 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/30 16:48:56 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** created by: abarnett, iprokofy
*/

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <stdlib.h>

int		g_n;
int		g_m;
char	g_empty;
char	g_obstacle;
char	g_full;
char	*g_buff;

void	ft_putstr(char *str);
char	*re_alloc(char *str, int old_size, int new_size);
int		init_matrix(int fd, int *matrix);
void	bsq_solve(int *matrix, int i, int j);
void	set_symbols(char c, int depth);
void	print_sol(int *matrix);

#endif

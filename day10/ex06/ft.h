/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:58:26 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/21 13:58:28 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		sum(int i, int j);
int		sub(int i, int j);
int		mul(int i, int j);
int		div(int i, int j);
int		mod(int i, int j);

typedef int		(*t_functions)(int, int);

#endif

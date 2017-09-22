/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:55:46 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/21 18:55:48 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H

typedef struct	s_opp
{
	char	*s;
	int		(*f)(int, int);
}				t_opp;

int				ft_add(int i, int j);
int				ft_sub(int i, int j);
int				ft_mul(int i, int j);
int				ft_div(int i, int j);
int				ft_mod(int i, int j);
int				ft_usage(int i, int j);
void			ft_putchar(char c);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);

t_opp			g_opptab[] =
{
	{"-", &ft_sub},
	{"+", &ft_add},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
	{"", &ft_usage}
};

#endif

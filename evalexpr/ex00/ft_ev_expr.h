/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ev_expr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 09:08:50 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/26 09:08:53 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EV_EXPR_H
# define FT_EV_EXPR_H

# include <stdlib.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_list_push_front(t_list **begin_list, void *data);
void				*ft_list_pop(t_list **begin_list);
void				ft_push_nbr(t_list **values, char **str);
int					ft_same_prio(char c1, char c2);

#endif

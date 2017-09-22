/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 11:42:54 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/26 11:42:56 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ev_expr.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

void	*ft_list_pop(t_list **begin_list)
{
	void	*ret;
	t_list	*current;

	current = *begin_list;
	if (current == NULL)
		return (NULL);
	ret = current->data;
	*begin_list = current->next;
	free(current);
	return (ret);
}

void	ft_push_nbr(t_list **values, char **str)
{
	int		value;

	value = 0;
	while (**str >= '0' && **str <= '9')
	{
		value = value * 10 + (**str - '0');
		(*str)++;
	}
	ft_list_push_front(values, (void *)(intptr_t)value);
}

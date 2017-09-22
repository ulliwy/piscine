/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:16:34 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/22 17:16:37 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list,
	void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list	*current;

	if (begin_list == NULL)
		return ;
	current = begin_list;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			f(current->data);
		}
		current = current->next;
	}
}

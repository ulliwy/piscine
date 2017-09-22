/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:50:05 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/22 17:50:07 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	if (begin_list == NULL)
		return (NULL);
	current = begin_list;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			return (current);
		}
		current = current->next;
	}
	return (NULL);
}

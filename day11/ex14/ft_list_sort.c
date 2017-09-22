/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 19:21:18 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/22 19:21:20 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current1;
	t_list	*current2;
	void	*temp;

	if (*begin_list == NULL)
		return ;
	current1 = *begin_list;
	while (current1)
	{
		current2 = *begin_list;
		while (current2)
		{
			if (cmp(current1->data, current2->data) < 0)
			{
				temp = current1->data;
				current1->data = current2->data;
				current2->data = temp;
			}
			current2 = current2->next;
		}
		current1 = current1->next;
	}
}

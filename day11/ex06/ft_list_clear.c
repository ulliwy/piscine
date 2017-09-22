/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 14:33:50 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/22 14:33:52 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;
	t_list	*current;

	if (!*begin_list)
		return ;
	current = *begin_list;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*begin_list = NULL;
}

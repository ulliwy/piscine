/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:39:56 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/22 13:39:58 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*ret;

	if (!begin_list)
		return (begin_list);
	ret = begin_list;
	while (ret->next)
	{
		ret = ret->next;
	}
	return (ret);
}

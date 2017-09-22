/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:56:34 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/22 10:56:36 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data);

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d\n", (int)list->data);
		list = list->next;
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

int		main()
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, (void*)8);
	ft_list_push_back(&list, (void*)9);
	ft_list_push_back(&list, (void*)(5));
	ft_list_push_back(&list, (void*)11);
	print_list(list);
}

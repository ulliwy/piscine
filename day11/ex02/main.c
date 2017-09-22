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

void	ft_list_push_front(t_list **begin_list, void *data);

void	print_list(t_list *list)
{
	while (list)
	{
		int *a = list->data;
		printf("%i\n", *a);
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
	int a = 9;
	int b = 10;
	int c = 90;
	int d = 9111;

	list = NULL;
	ft_list_push_front(&list, (void*)&a);
	ft_list_push_front(&list, (void*)&b);
	ft_list_push_front(&list, (void*)&c);
	ft_list_push_front(&list, (void*)&d);
	print_list(list);
}

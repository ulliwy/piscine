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

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	current = *begin_list;
	while (current->next)
		current = current->next;
	current->next = ft_create_elem(data);
}

void	print_list(t_list *list)
{
	if (list == NULL)
	{
		printf("NULL LIST\n");
		return ;
	}
	while (list)
	{
		int *a = list->data;
		printf("%d - ", *a);
		list = list->next;
	}
	printf("NULL\n");
}

int		main()
{
	t_list	*list1;
	t_list	*list2;
	int a = 9;
	int b = 1;
	int c = 9;
	int d = 8;

	int e = 99;
	int f = 10;
	int g = 94;
	int h = 91;

	list1 = NULL;
	list2 = NULL;

	ft_list_push_back(&list1, (void*)&a);
	ft_list_push_back(&list1, (void*)&b);
	ft_list_push_back(&list1, (void*)&c);
	ft_list_push_back(&list1, (void*)&d);

	ft_list_push_back(&list2, (void*)&e);
	ft_list_push_back(&list2, (void*)&f);
	ft_list_push_back(&list2, (void*)&g);
	ft_list_push_back(&list2, (void*)&h);
	
	print_list(list1);
	print_list(list2);

	ft_list_merge(&list2, list1);
	print_list(list2);
}

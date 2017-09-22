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

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

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

void	foo(void *data)
{
	int *a = data;
	printf("%d\n", *a);
}

int		cmp(int *a, int *b)
{
	return (*a - *b);
}

int		main()
{
	t_list	*list;
	t_list	*test;
	int r = 11;
	int a = 9;
	int b = 10;
	int c = 90;
	int d = 9111;

	list = NULL;
	ft_list_push_back(&list, (void*)&a);
	ft_list_push_back(&list, (void*)&b);
	ft_list_push_back(&list, (void*)&c);
	ft_list_push_back(&list, (void*)&d);
	//print_list(list);
	test = ft_list_find(list, (void *)&r, &cmp);
	print_list(test);
}

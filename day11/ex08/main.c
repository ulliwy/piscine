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

void	ft_list_reverse(t_list **begin_list);

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
	t_list	*list;
	int a = 9;
	int b = 10;
	int c = 90;
	int d = 9111;

	list = NULL;
	ft_list_push_back(&list, (void*)&a);
	ft_list_push_back(&list, (void*)&b);
	ft_list_push_back(&list, (void*)&c);
	ft_list_push_back(&list, (void*)&d);
	print_list(list);
	ft_list_reverse(&list);
	print_list(list);
}

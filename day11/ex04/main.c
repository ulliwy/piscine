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

t_list	*ft_list_last(t_list *begin_list);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

void	print_list(t_list *list)
{
	while (list)
	{
		int *a = list->data;
		printf("%i - ", *a);
		list = list->next;
	}
	printf("NULL\n");
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
	t_list	*ret;
	int a = 9;
	int b = 10;
	int c = 90;
	int d = 9111;

	list = NULL;
	ft_list_push_front(&list, (void*)&a);
	ft_list_push_front(&list, (void*)&b);
	ft_list_push_front(&list, (void*)&c);
	ft_list_push_front(&list, (void*)&d);
	ret = ft_list_last(list);
	if (ret == NULL)
		printf("%s\n", "NULL");
	else
	{
		int *show = ret->data;
		printf("%d\n", *show);
	}
	print_list(list);
}

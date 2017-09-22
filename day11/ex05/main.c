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

t_list	*ft_list_push_params(int ac, char **av);

void	print_list(t_list *list)
{
	while (list)
	{
		char *a = list->data;
		printf("%s - ", a);
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

int		main(int argc, char **argv)
{
	t_list	*list;

	list = ft_list_push_params(argc, argv);
	if (list == NULL)
		printf("%s\n", "NULL");
	else
	{
		char *show = list->data;
		printf("%s\n", show);
	}
	print_list(list);
}

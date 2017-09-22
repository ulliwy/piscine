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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

void	print_list(t_list *list)
{
	if (list == NULL)
	{
		printf("NULL LIST\n");
		return ;
	}
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

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	i = 1;
	list = NULL;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}

int		main()
{
	t_list	*list;
	//t_list	*test;

	list = ft_create_elem("asdf");
	print_list(list);
	printf("---> %s\n", (char*)(ft_list_at(list, 0)));

	//list = ft_list_push_params(argc, argv);
	//print_list(list);
	//test = ft_list_at(list, 0);
	//print_list(test);
}

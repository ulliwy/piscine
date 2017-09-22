/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:23:08 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/24 14:23:36 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"
#include <stdio.h>

t_btree	*btree_create_node(void *item);

void	print_list(t_btree	*tree)
{
	while (tree)
	{
		printf("%d\n", (int)tree->item);
		printf("%d\n", (int)tree->left);
		printf("%d\n", (int)tree->right);
		tree = tree->left;
	}
}

int		main()
{
	t_btree	*tree;

	tree = btree_create_node((void*)5);
	print_list(tree);
}

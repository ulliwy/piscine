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

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = (t_btree*)malloc(sizeof(t_btree));
	tree->item = item;
	tree->left = 0;
	tree->right = 0;
	return (tree);
}

void	print_elem(void	*item)
{
	if (item)
		printf("%d\n", (int)item);
}

int		main()
{
	t_btree	*tree;

	tree = btree_create_node((void*)1);
	tree->left = btree_create_node((void*)2);
	tree->right = btree_create_node((void*)3);
	tree->left->left = btree_create_node((void*)4);
	tree->left->right = btree_create_node((void*)5);
	btree_apply_prefix(tree, &print_elem);
}

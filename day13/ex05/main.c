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

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}

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
	if (!item)
		printf("NULL\n");
	else
		printf("elem: %d\n", *((int*)item));
}

int		cmpf(void *a, void *b)
{
	int c = *((int *)a);
	int d = *((int *)b);
	return (c - d);
}

int		main()
{
	t_btree	*tree;
	void *elem;
	tree = NULL;

	int ref = 7;

	int a = 5;
	int b = 2;
	int c = 7;
	int d = 1;
	int e = 4;
	int f = 3;

	tree = btree_create_node((void*)&a);
	tree->left = btree_create_node((void*)&b);
	tree->right = btree_create_node((void*)&c);
	tree->left->left = btree_create_node((void*)&d);
	tree->left->right = btree_create_node((void*)&e);
	tree->right->right = btree_create_node((void*)&f);
	elem = btree_search_item(tree, (void*)&ref, &cmpf);
	if (!(int*)elem)
		printf("NULL\n");
	else
		print_elem(elem);
	//btree_apply_prefix(tree, &print_elem);
}

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

int		btree_level_count(t_btree *root);

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
	int		count;
	
	tree = NULL;

	//int ref = 7;

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
	tree->left->right->left = btree_create_node((void*)&f);
	count = btree_level_count(tree);
	printf("%d\n", count);
	//btree_apply_prefix(tree, &print_elem);
}

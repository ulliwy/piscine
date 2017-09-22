/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 19:32:10 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/24 19:32:12 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	void	*elem;

	if (root)
	{
		if (root->left)
		{
			elem = btree_search_item(root->left, data_ref, cmpf);
			if (elem)
				return (elem);
		}
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		if (root->right)
		{
			elem = btree_search_item(root->right, data_ref, cmpf);
			if (elem)
				return (elem);
		}
	}
	return (NULL);
}

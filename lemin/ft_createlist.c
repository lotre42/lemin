/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 15:23:05 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/04 19:41:23 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_List		*ft_createlist(char *str, char *father, t_stock *stok)
{
	t_List *tree;
	char *tmp;

	if (!(tree = malloc(sizeof(t_List))))
		return (NULL);
	if (!father)
	{
		tree->node = ft_createtree(str, stok);
		tree->next = NULL;
		return (tree);
	}
	tree->next = NULL;
	tree->node = ft_createtree(str, stok);
	while ((tmp = ft_searchbrother(str, father, stok)))
		tree->next = ft_createlist(tmp, father, stok);
	if (tmp)
		free (tmp);
	return (tree);
}

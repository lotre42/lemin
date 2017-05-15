/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 07:46:15 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 18:53:27 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_tree	*ft_createtree(char *str, t_stock *stok)
{
	t_tree	*tree;
	char	*name;
	char	*tmp;

	if (!(tree = malloc(sizeof(t_tree))))
		return (NULL);
	name = ft_strdup(str);
	tree->str = name;
	ft_addend(name, &stok->file);
	tree->level = 2147483647;
	tmp = ft_searchchild(name, stok);
	if (!ft_strcmp(name, stok->end))
		tree->child = NULL;
	else if (tmp)
	{
		tree->child = ft_createlist(tmp, name, stok);
		free(tmp);
	}
	else
		tree->child = NULL;
	return (tree);
}

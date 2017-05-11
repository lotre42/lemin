/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 11:53:23 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/10 19:33:13 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

void	ft_freetree(t_llist *tree)
{
	t_llist *tmp;
	t_llist *tmp2;
	t_tree *father;

	tmp = tree;
	if (tree->node)
	{
		father = tree->node;
		free(father->str);
		if (father->child)
		{
			tmp2 = father->child;
			ft_freetree(tmp2);
		}
			free(tree->node);
	}
	if (tree->next)
	{
		tmp = tree->next;
		ft_freetree(tmp);
	}
	if (tree)
		free(tree);
}

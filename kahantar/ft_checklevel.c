/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checklevel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 09:21:20 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 18:55:50 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int	ft_checklevel(t_llist *tree, char *str, int i, t_road **road)
{
	tree->node->level = i;
	ft_addroad(tree->node->str, i, road);
	if (tree->next)
		ft_checklevel(tree->next, str, i, road);
	if (tree->node->child)
		ft_checklevel(tree->node->child, str, i + 1, road);
	return (1);
}

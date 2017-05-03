/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 15:36:32 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/01 15:44:18 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_List		*ft_build(t_tree *tree, t_List *lst)
{
	t_List *elem;

	if (!(elem = malloc(sizeof(t_List))))
		return (NULL);
	elem->node = tree;
	elem->next = lst;
	return (elem);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 15:36:32 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/09 09:35:02 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_llist		*ft_build(t_tree *tree, t_llist *lst)
{
	t_llist *elem;

	if (!(elem = malloc(sizeof(t_llist))))
		return (NULL);
	elem->node = tree;
	elem->next = lst;
	return (elem);
}

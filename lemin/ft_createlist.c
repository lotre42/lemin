/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 15:23:05 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/03 08:13:25 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_List		*ft_createlist(char *str, t_parse *road, char *father, t_parse **file, t_parse *room)
{
	t_List *tree;
	char *tmp;

	if (!(tree = malloc(sizeof(t_List))))
		return (NULL);
	while ((tmp = ft_searchbrother(str, road, father, *file, room)))
		tree->next = ft_createlist(tmp, road, str, file, room);
	tree->node = ft_createtree(str, road, room, file);
	return (tree);
}

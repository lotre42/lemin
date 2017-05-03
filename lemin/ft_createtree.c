/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 07:46:15 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/03 08:13:34 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_tree	*ft_createtree(char *str, t_parse *road, t_parse *room, t_parse **file)
{
	t_tree *tree;
	char	*name;
	char	*tmp;

	name = ft_strdup(str);
	ft_putendl(name);
	ft_addend(name, file);
	if (!(tree = malloc(sizeof(t_tree))))
		return (NULL);
	tree->str = name;
	tmp = ft_searchchild(name, road, *file, room);
	if (tmp)
		tree->child = ft_createlist(tmp, road, name, file, room);
	return (tree);
}

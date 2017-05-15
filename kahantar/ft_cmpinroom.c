/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpinroom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 22:37:15 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/14 22:55:39 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int		ft_cmpinroom(t_parse *room)
{
	t_parse *tmp;
	char	*str;

	tmp = room;
	if (!room)
		return (0);
	while (tmp)
	{
		str = tmp->str;
		room = tmp->next;
		while (room)
		{
			if (!ft_strcmp(room->str, str))
				return (0);
			room = room->next;
		}
		tmp = tmp->next;
	}
	return (1);
}

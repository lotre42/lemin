/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchinroom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 08:01:33 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/03 08:03:07 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int		ft_searchinroom(t_parse *room, char *str)
{
	while (room)
	{
		if (!ft_strcmp(room->str, str))
			return (1);
		room = room->next;
	}
	return (0);
}

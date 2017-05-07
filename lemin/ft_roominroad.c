/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roominroad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 14:48:04 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/03 14:48:08 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

static int	ft_search(char *str, t_parse *room)
{
	t_parse *tmp;

	tmp = room;
	while (tmp)
	{
		if (!ft_strcmp(tmp->str, str))
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int			ft_roominroad(char *str, t_parse *room)
{
	char	*one;
	char	*seconde;

	one = ft_firstword(str, '-');
	seconde = ft_lastword(str, '-');
	if (ft_search(one, room) && ft_search(seconde, room))
		return (1);
	return (0);
}

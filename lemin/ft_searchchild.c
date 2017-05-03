/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchchild.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 07:55:32 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/03 08:09:57 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

char	*ft_searchchild(char *str, t_parse *road, t_parse *file, t_parse *room)
{
	char *one;
	char *seconde;

	seconde = NULL;
	one = NULL;
	while (road)
	{
		one = ft_firstroominroad(road->str);
		if (!ft_strcmp(one, str))
		{
			seconde = ft_searchroominroad(road->str);
			if (ft_searchinlist(seconde, file) && ft_searchinroom(room, seconde))
				return (seconde);
		}
		one = ft_searchroominroad(road->str);
		if (!ft_strcmp(one, str))
		{
			seconde = ft_firstroominroad(road->str);
			if (ft_searchinlist(seconde, file) && ft_searchinroom(room, seconde))
				return (seconde);
		}
		road = road->next;
	}
	return (NULL);
}

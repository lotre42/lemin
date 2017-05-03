/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchbrother.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 08:09:57 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/03 08:10:21 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

char			*ft_searchbrother(char *str, t_parse *road, char *father, t_parse *file, t_parse *room)
{
	char	*one;
	char	*seconde;

	one = NULL;
	seconde = NULL;
	while (road)
	{
		one = ft_firstroominroad(road->str);
		seconde = ft_searchroominroad(road->str);
		if ((!ft_strcmp(one, father) && !ft_strcmp(seconde, str)) || (!ft_strcmp(one, str) && !ft_strcmp(seconde, father)))
		{
			road = road->next;
			break ;
		}
		road = road->next;
	}
	seconde = ft_searchchild(father, road, file, room);
	return (seconde);
}

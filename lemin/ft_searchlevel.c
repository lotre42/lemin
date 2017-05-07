/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchlevel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 09:32:26 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/07 09:34:31 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int		ft_searchlevel(t_road *road, char *str)
{
	while (road)
	{
		if (!ft_strcmp(str, road->str))
			return (road->level);
		road = road->next;
	}
	return (-10);
}

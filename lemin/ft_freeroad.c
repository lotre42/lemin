/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeroad.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 15:07:14 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/07 15:07:57 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/lemin.h"

int		ft_freeroad(t_road **pile)
{
	t_road *cppile;

	cppile = (*pile);
	while (cppile)
	{
		cppile = (*pile)->next;
		if ((*pile)->str)
			free((*pile)->str);
		free(*pile);
		*pile = cppile;
	}
	return (0);
}

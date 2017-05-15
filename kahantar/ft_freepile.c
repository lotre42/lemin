/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freepile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 15:48:43 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/15 08:04:58 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int		ft_freepile(t_parse **pile)
{
	t_parse *cppile;

	cppile = (*pile);
	while (cppile)
	{
		cppile = (*pile)->next;
		if ((*pile)->str)
			free((*pile)->str);
		free(*pile);
		*pile = cppile;
	}
	return (1);
}

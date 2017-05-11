/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestock.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 12:39:08 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/10 15:40:30 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

void	ft_freestock(t_stock *stok)
{
	if (stok)
	{
		if (stok->room)
			ft_freepile(&stok->room);
		if (stok->room2)
			ft_freepile(&stok->room2);
		if (stok->road)
			ft_freepile(&stok->road);
		if (stok->file)
			ft_freepile(&stok->file);
		if (stok->com)
			ft_freepile(&stok->com);
		if (stok->end)
			free(stok->end);
		if (stok->start)
			free(stok->start);
		ft_displaylist(stok->room2);
		free(stok);
	}
}

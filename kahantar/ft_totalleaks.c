/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totalleaks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 15:10:54 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/15 23:03:58 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int	ft_totalleaks(t_parse **lem, t_stock *stok, t_road **road,
		t_llist *tree)
{
	if (stok)
		ft_freestock(stok);
	if (lem)
		ft_freepile(lem);
	if (road)
		ft_freeroad(road);
	if (tree)
		ft_freetree(tree);
	return (1);
}

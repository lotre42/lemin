/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totalleaks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 15:10:54 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 17:14:33 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

void	ft_totalleaks(t_parse **lem, t_stock *stok, t_road **road,
		t_llist *tree)
{
	ft_freestock(stok);
	ft_freepile(lem);
	ft_freeroad(road);
	ft_freetree(tree);
}

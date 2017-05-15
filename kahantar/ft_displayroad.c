/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displayroad.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 08:51:20 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/07 09:01:46 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

void	ft_displayroad(t_road *road)
{
	while (road)
	{
		ft_putstr(road->str);
		ft_putchar(' ');
		ft_putnbr(road->level);
		ft_putchar('\n');
		road = road->next;
	}
}

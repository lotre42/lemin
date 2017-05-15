/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initstock.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 07:49:42 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/15 07:52:43 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_stock	*ft_initstock(void)
{
	t_stock *stock;

	if (!(stock = malloc(sizeof(t_stock))))
		return (NULL);
	(stock)->room = NULL;
	(stock)->room2 = NULL;
	(stock)->road = NULL;
	(stock)->com = NULL;
	(stock)->file = NULL;
	stock->end = NULL;
	stock->start = NULL;
	return (stock);
}

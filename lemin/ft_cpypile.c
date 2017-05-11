/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpypile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 19:05:21 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 18:54:56 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_parse		*ft_cpypile(t_parse *pilea)
{
	t_parse *cppile;

	cppile = NULL;
	while (pilea)
	{
		ft_addend(pilea->str, &cppile);
		pilea = pilea->next;
	}
	return (cppile);
}

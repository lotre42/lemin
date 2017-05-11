/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diplayant.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 20:28:05 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 20:39:40 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

void	ft_diplayant(t_parse *ok, int nb)
{
	int fm;

	fm = 1;
	ok = ok->next;
	while (ok)
	{
		ft_putchar('L');
		ft_putnbr(fm);
		ft_putchar('-');

	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displaylist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 18:53:52 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 18:54:28 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

void	ft_displaylist(t_parse *list)
{
	t_parse *display;

	display = list;
	while (display)
	{
		ft_putendl(display->str);
		display = display->next;
	}
}

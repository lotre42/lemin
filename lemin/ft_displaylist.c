/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displaylist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 18:53:52 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/14 01:03:05 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

static void	ft_disl(char *str, char *display)
{
	ft_putstr(str);
	ft_putendl(display);
	ft_putstr("\033[0m");
}

void		ft_displaylist(t_parse *list)
{
	t_parse *display;

	display = list;
	while (display)
	{
		if (display->str[0] == '#' && display->str[1] == '#')
			ft_disl("\033[32m", display->str);
		else if (display->str[0] == '#' && display->str[1] != '#')
			ft_disl("\033[31m", display->str);
		else if (!ft_strchr(display->str, '-'))
			ft_disl("\033[33m", display->str);
		else
			ft_disl("\033[34m", display->str);
		display = display->next;
	}
}

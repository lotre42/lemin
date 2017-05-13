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
		if (display->str[0] == '#' && display->str[1] == '#')
		{
			ft_putstr("\033[32m");
			ft_putendl(display->str);
			ft_putstr("\033[0m");
		}
		else if (display->str[0] == '#' && display->str[1] != '#')
		{
			ft_putstr("\033[31m");
			ft_putendl(display->str);
			ft_putstr("\033[0m");
		}
		else if (!ft_strchr(display->str, '-'))
		{	
			ft_putstr("\033[33m");
			ft_putendl(display->str);
			ft_putstr("\033[0m");
		}
		else
		{
			ft_putstr("\033[34m");
			ft_putendl(display->str);
			ft_putstr("\033[0m");
		}
		display = display->next;
	}
}
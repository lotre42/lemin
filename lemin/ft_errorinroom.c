/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorinroom.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 09:28:23 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 15:07:59 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

static int		ft_searchintab(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\0')
		i++;
	while (str[i])
	{
		if ((str[i] < 48 || str[i] > 57) && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

static int		ft_lentab(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			c++;
		i++;
	}
	if (c == 2 || c == 0)
		return (1);
	else
		return (0);
}

static int		ft_comptspace(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			c++;
		i++;
	}
	if (c == 2)
		return (1);
	else
		return (0);
}

int				ft_errorinroom(t_parse *room)
{
	char **tab;

	while (room)
	{
		tab = NULL;
		if (room->str[0] != '#')
		{
			if (!ft_comptspace(room->str))
				return (0);
		}
		if (room->str[0] != '#')
		{
			if ((!ft_lentab(room->str)) ||(!ft_searchintab(room->str)))
				return (0);
		}
		room = room->next;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorinroom.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 09:28:23 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/03 13:07:34 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

static int		ft_searchintab(char **tab)
{
	int i;
	int j;

	i = 1;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] < 48 || tab[i][j] > 57)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int		ft_lentab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	if (i == 3 || i == 0)
		return (1);
	else
		return (0);
}

int				ft_errorinroom(t_parse *room)
{
	char **tab;

	tab = NULL;
	while (room)
	{
		if (room->str[0] != '#')
		{
			tab = ft_strsplit(room->str, ' ');
			if ((!ft_lentab(tab)) ||(!ft_searchintab(tab)))
			{
				if (tab)
					free(tab);
				return (0);
			}
		}
		if (tab)
		{
			free (tab);
			tab = NULL;
		}
		room = room->next;
	}
	return (1);
}

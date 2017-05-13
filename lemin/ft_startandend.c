/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startandend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 18:16:45 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/14 01:34:02 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

static char	*ft_returnroom(char *start, char *end, int i)
{
	if (!start || !end)
	{
		ft_putstr("ERROR");
		return (NULL);
	}
	if (i == 1 && end)
	{
		if (start)
			free(start);
		return (end);
	}
	if (i == 0 && start)
	{
		if (end)
			free(end);
		return (start);
	}
	return (NULL);
}

char		*ft_startandend(t_parse *room, int i)
{
	t_parse *tmp;
	char	*start;
	char	*end;

	tmp = room;
	end = NULL;
	start = NULL;
	while (tmp->next)
	{
		if ((!ft_strcmp("##start", tmp->str) &&
					!ft_strcmp("##end", tmp->next->str))
			|| (!ft_strcmp("##start", tmp->str) &&
				!ft_strcmp("##end", tmp->next->str)))
		{
			ft_putstr("ERROR");
			return (0);
		}
		else if (!ft_strcmp("##start", tmp->str))
			start = ft_strdup(tmp->next->str);
		else if (!ft_strcmp("##end", tmp->str))
			end = ft_strdup(tmp->next->str);
		tmp = tmp->next;
	}
	return (ft_returnroom(start, end, i));
}

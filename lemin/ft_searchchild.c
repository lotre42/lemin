/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchchild.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 07:55:32 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 18:45:02 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

static char	*ft_returnchild(char *one, char *str, t_stock *stok, int i)
{
	char *seconde;

	seconde = NULL;
	free(one);
	if (i == 0)
		seconde = ft_searchroominroad(str);
	else
		seconde = ft_firstroominroad(str);
	if (ft_searchinlist(str, stok->file) &&
			ft_searchinroom(stok->room, seconde))
	{
		ft_addend(str, &stok->file);
		return (seconde);
	}
	free(seconde);
	return (NULL);
}

char		*ft_searchchild(char *str, t_stock *stok)
{
	char *one;
	char *seconde;
	t_parse *tmp;

	tmp = stok->road;
	while (tmp)
	{
		one = ft_firstroominroad(tmp->str);
		if (!ft_strcmp(one, str))
		{
			if ((seconde = ft_returnchild(one, tmp->str, stok, 0)))
				return (seconde);
		}
		else
			free(one);
		one = ft_searchroominroad(tmp->str);
		if (!ft_strcmp(one, str))
		{
			if ((seconde = ft_returnchild(one, tmp->str, stok, 1)))
				return (seconde);
		}
		else
			free(one);
		tmp = tmp->next;
	}
	return (NULL);
}

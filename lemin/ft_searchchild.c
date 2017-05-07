/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchchild.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 07:55:32 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/07 11:43:16 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

char	*ft_searchchild(char *str, t_stock *stok)
{
	char *one;
	char *seconde;
	t_parse *tmp;

	tmp = stok->road;
	seconde = NULL;
	one = NULL;
	while (tmp)
	{
		one = ft_firstroominroad(tmp->str);
		if (!ft_strcmp(one, str))
		{
			free(one);
			seconde = ft_searchroominroad(tmp->str);
			if (ft_searchinlist(tmp->str, stok->file) &&
					ft_searchinroom(stok->room, seconde))
			{
				ft_addend(tmp->str, &stok->file);
				return (seconde);
			}
		}
		if (one)
			free(one);
		one = ft_searchroominroad(tmp->str);
		if (!ft_strcmp(one, str))
		{
			free(one);
			seconde = ft_firstroominroad(tmp->str);
			if (ft_searchinlist(tmp->str, stok->file) &&
					ft_searchinroom(stok->room, seconde))
			{
				ft_addend(tmp->str, &stok->file);
				return (seconde);
			}
		}
		if (one)
			free(one);
		tmp = tmp->next;
	}
	return (NULL);
}

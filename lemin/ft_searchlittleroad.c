/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchlittleroad.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 09:24:25 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/07 12:11:15 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

t_parse		*ft_searchlittleroad(t_stock *stok, t_road *road)
{
	t_parse *tmp;
	char *str;
	char *str2;
	char *little;

	tmp = NULL;
	stok->file = NULL;
	str = ft_searchchild(stok->end, stok);
	little = str;
	while ((str2 = ft_searchbrother(str, stok->end, stok)))
	{
		if (ft_searchlevel(road, str) < ft_searchlevel(road,str2))
			little = ft_strdup(str);
		else
			little = ft_strdup(str2);
		str = ft_strdup(str2);
	}
	ft_putendl(little);
	return (NULL);
}

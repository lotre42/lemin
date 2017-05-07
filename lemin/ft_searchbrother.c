/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchbrother.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 08:09:57 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/03 13:39:46 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

char			*ft_searchbrother(char *str, char *father, t_stock *stok)
{
	char	*one;
	char	*seconde;
	t_parse *tmp;

	one = NULL;
	seconde = NULL;
	tmp = stok->road;
	while (stok->road)
	{
		one = ft_firstroominroad(stok->road->str);
		seconde = ft_searchroominroad(stok->road->str);
		if ((!ft_strcmp(one, father) && !ft_strcmp(seconde, str)) ||
				(!ft_strcmp(one, str) && !ft_strcmp(seconde, father)))
		{
			free(one);
			free (seconde);
			stok->road =stok->road->next;
			break ;
		}
		if (one)
			free(one);
		if (seconde)
			free(seconde);
		stok->road = stok->road->next;
	}
	seconde = ft_searchchild(father, stok);
	stok->road = tmp;
	return (seconde);
}

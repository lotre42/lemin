/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 15:48:39 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/07 08:44:43 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int		ft_addend(char *str, t_parse **add)
{
	t_parse *new;
	t_parse *tmp;

	if (!(new = malloc(sizeof(t_parse))))
		return (0);
	new->str = ft_strdup(str);
	new->next = NULL;
	tmp = *add;
	if (!tmp)
		*add = new;
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (0);
}

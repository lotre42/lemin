/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 10:56:38 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/14 04:13:07 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int	ft_add(char *str, t_parse **add)
{
	t_parse *new;

	if (!(new = malloc(sizeof(t_parse))))
		return (0);
	new->str = ft_strdup(str);
	new->next = *add;
	*add = new;
	return (0);
}

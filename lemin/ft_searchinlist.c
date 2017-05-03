/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchinlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 18:08:38 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/02 18:12:02 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int		ft_searchinlist(char *str, t_parse *file)
{
	while (file)
	{
		if (!ft_strcmp(str, file->str))
			return (0);
		file = file->next;
	}
	return (1);
}

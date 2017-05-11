/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatroad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 08:08:28 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/09 08:33:08 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int		ft_formatroad(char *road)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (road[i] != '\0')
	{
		if (road[i] == '-')
			c++;
		if (road[i] == ' ')
			return (0);
		i++;
	}
	if (c == 1)
		return (1);
	else
		return (0);
}

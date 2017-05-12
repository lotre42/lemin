/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbant.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 17:14:46 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/12 03:24:02 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int	ft_nbant(char *str)
{
	int ant;
	int i;

	ant = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			i = 0;
			break ;
		}
		i++;
	}
	if (i > 0)
	{
		ant = ft_atoi(str);
		if (ant > 2147483647 || ant < 0)
			return (0);
		return (1);
	}
	else
		return (0);
}

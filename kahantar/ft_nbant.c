/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbant.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 17:14:46 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/14 22:28:15 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

static int	ft_longnb(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] == '0' && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	if (j > 10)
		return (0);
	return (1);
}

int			ft_nbant(char *str)
{
	int ant;
	int i;

	ant = 0;
	i = 0;
	if (!str || !ft_longnb(str))
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
		if (ant > 2147483647 || ant <= 0)
			return (0);
		return (1);
	}
	else
		return (0);
}

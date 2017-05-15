/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstroominroad.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 00:29:02 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/30 00:35:09 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

char	*ft_firstroominroad(char *str)
{
	char	*firstroom;
	int		i;

	i = 0;
	firstroom = NULL;
	while (str[i] != '-' && str[i] != '\0')
		i++;
	if (i > 0)
	{
		if (!(firstroom = malloc(sizeof(char) * i + 1)))
			return (NULL);
		i = 0;
		while (str[i] != '-' && str[i] != '\0')
		{
			firstroom[i] = str[i];
			i++;
		}
		firstroom[i] = '\0';
	}
	return (firstroom);
}

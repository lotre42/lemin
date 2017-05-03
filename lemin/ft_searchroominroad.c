/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchroominroad.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 23:52:33 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/02 08:51:25 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

char	*ft_searchroominroad(char *str)
{
	char	*seconderoom;
	int		i;
	int		j;

	seconderoom = NULL;
	i = 0;
	j = 0;
	while (str[i] != '-' &&str[i] != '\0')
		i++;
	if (!(seconderoom = malloc(sizeof(char) * ((ft_strlen(str) - i) + 1))))
		return (NULL);
	i++;
	while (str[i] != '\0')
	{
		seconderoom[j] = str[i];
		i++;
		j++;
	}
	seconderoom[j] = '\0';
	return (seconderoom);
}

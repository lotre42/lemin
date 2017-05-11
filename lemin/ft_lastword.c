/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastword.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 18:21:43 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 18:23:16 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

char	*ft_lastword(char *str, char c)
{
	char	*last;
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\0')
		i++;
	j = i;
	while (str[i] != c && i > 0)
		i--;
	last = malloc(sizeof(char) * (j - i) + 1);
	i++;
	j = 0;
	while (str[i] != '\0')
	{
		last[j] = str[i];
		i++;
		j++;
	}
	last[j] = '\0';
	return (last);
}

char	*ft_firstword(char *str, char c)
{
	char	*start;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] == c && str[i] != '\0')
		i++;
	j = i;
	while (str[i] != c && str[i] != '\0')
		i++;
	start = malloc(sizeof(char) * (i - j) + 1);
	i = 0;
	while (str[j] != c && str[i] != '\0')
	{
		start[i] = str[j];
		i++;
		j++;
	}
	start[j] = '\0';
	return (start);
}

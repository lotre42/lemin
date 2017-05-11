/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeanderror.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 17:20:56 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/11 17:28:05 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

int		ft_freeanderror(t_parse *tmp)
{
	ft_freepile(&tmp);
	ft_putendl("ERROR");
	return (0);
}

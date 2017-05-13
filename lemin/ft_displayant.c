/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displayant.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 23:31:52 by kahantar          #+#    #+#             */
/*   Updated: 2017/05/12 03:06:33 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/lemin.h"

static char	*ft_retroom(t_parse *ok, int i)
{
	int x;

	x = 0;
	while (x != i)
	{
		ok = ok->next;
		x++;
	}
	return (ok->str);
}

static void	ft_dis(char *str, int i)
{
	ft_putstr("\e[38;5;");
	ft_putnbr(100 + (i % 20));
	ft_putstr("m");
	ft_putchar('L');
	ft_putnbr(i);
	ft_putchar('-');
	ft_putstr(str);
	ft_putstr("\033[0m");
}

static void	ft_suite(t_parse *ok, int nb, char *end)
{
	int x;
	int t;
	int len;

	x = ft_listlen(ok) - 1;
	t = 2;
	while (t < nb)
	{
		x = ft_listlen(ok) - 1;
		len = t;
		while (x > 0)
		{
			if (len <= nb)
			{
				ft_dis(ft_retroom(ok, x), len);
				ft_putchar(' ');
			}
			len++;
			x--;
		}
		ft_putchar('\n');
		t++;
	}
	ft_dis(end, nb);
}

void		ft_displayant(t_parse *ok, int nb, char *end)
{
	int len;
	int i;
	int x;

	i = 0;
	ft_putstr("Les fourmis vont parcourir ");
	ft_putnbr(ft_listlen(ok));
	ft_putstr(" salles.");
	x = 7;
	while (i < ft_listlen(ok))
	{
		len = 1;
		x = i;
		while (x > 0)
		{
			if (len <= nb)
			{
				ft_dis(ft_retroom(ok, x), len);
				ft_putchar(' ');
			}
			x--;
			len++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_suite(ok, nb, end);
}


#include "includes/lemin.h"

static int	ft_nbant(char *str)
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
		return (ant = ft_atoi(str));
	else
		return (0);
}

static t_stock	*ft_initstock(void)
{
	t_stock *stock;

	if (!(stock = malloc(sizeof(t_stock))))
		return (NULL);
	(stock)->room = NULL;
	(stock)->room2 = NULL;
	(stock)->road = NULL;
	(stock)->com = NULL;
	(stock)->file = NULL;
	stock->end = NULL;
	return (stock);
}

static t_stock	*ft_try(t_parse *lem)
{
	t_stock *stock;
	t_parse *tmp;

	tmp = lem;
	stock = ft_initstock();
	if (!lem)
		return (0);
	while (lem)
	{
		if (lem->str[0] == '#' && lem->str[1] != '#')
			ft_addend(lem->str, &stock->com);
		else if (ft_strchr(lem->str, ' ') ||
				(lem->str[0] == '#' && lem->str[1] == '#'))
		{
			ft_addend(ft_firstword(lem->str, ' '), &stock->room);
			ft_addend(lem->str, &stock->room2);
		}
		lem = lem->next;
	}
	while (tmp)
	{
		if (ft_strchr(tmp->str, '-') && !ft_strchr(tmp->str, ' '))
		{
			if (ft_roominroad(tmp->str, stock->room))
				ft_addend(tmp->str, &stock->road);
			else
				break ;
		}
		tmp = tmp->next;
	}
	return (stock);
}

t_parse		*ft_parse(int argc, char **argv)
{
	t_parse *lem;
	t_List *tree;
	t_stock *stok;
	t_road *road;
	char	*str;
	int	ret;
	
	ret = 1;
	str = NULL;
	lem = NULL;
	road = NULL;
	while ((ret = get_next_line(0, &str)))
	{
		ft_addend(str, &lem);
		ft_strdel(&str);
	}
	if (!lem)
	{
		ft_putendl("ERROR");
		return (NULL);
	}
	ft_nbant(lem->str);
	lem = lem->next;
	stok = ft_try(lem);
	if (!ft_errorinroom(stok->room2))
	{
		ft_putendl("ERROR");
		return (0);
	}
	str = ft_startandend(stok->room, 0);
	stok->end = ft_startandend(stok->room, 1);
	tree = ft_createlist(str, NULL, stok);
	if (ft_searchinlist(stok->end, stok->file))
	{
		ft_putendl("ERROR");
		return (0);
	}
//	ft_displaylist(stok->file);
	ft_checklevel(tree, stok->end, 0, &road);
//	ft_displayroad(road);
	ft_searchlittleroad(stok, road);
	return (lem);
}

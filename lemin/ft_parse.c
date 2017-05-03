
#include "includes/lemin.h"

t_parse		*ft_parse(int argc, char **argv)
{
	t_parse *lem;
	t_parse *room;
	t_parse *road;
	t_parse *com;
	t_tree *tree;
	t_parse *file;
	char	*str;
	int	ret;
	int fm;
	
	ret = 1;
	file = NULL;
	str = NULL;
	lem = NULL;
	room = NULL;
	road = NULL;
	com = NULL;
	fm = 0;
	while ((ret = get_next_line(0, &str)))
		ft_addend(str, &lem);
	while (lem->str[fm])
	{
		if (lem->str[fm] < 48 || lem->str[fm] > 57)
		{
			fm = 0;
			break ;
		}
		fm++;
	}
	if (fm > 0)
		fm = ft_atoi(lem->str);
	lem = lem->next;
	while (lem)
	{
		if (lem->str[0] == '#' && lem->str[1] != '#')
			ft_addend(lem->str, &com);
		else if (!ft_strchr(lem->str, '-'))
			ft_addend(ft_firstword(lem->str), &room);
		else
			ft_addend(lem->str, &road);
		lem = lem->next;
	}
	str = ft_startandend(room, 0);
	tree = ft_createtree(str, road, room, &file);
	return (lem);
}


#include "includes/lemin.h"

t_parse		*ft_parse(int argc, char **argv)
{
	t_parse *lem;
	t_parse *room;
	t_parse *road;
	char	*str;
	int	ret;
	
	ret = 1;
	str = NULL;
	lem = NULL;
	room = NULL;
	road = NULL;
	while ((ret = get_next_line(0, &str)))
		ft_addend(str, &lem);
	lem = lem->next;
	while (lem)
	{
		if (!ft_strchr(lem->str, '-'))
			ft_addend(ft_firstword(lem->str), &room);
		else
			ft_addend(lem->str, &road);
		lem = lem->next;
	}
	ft_searchbestroad(room, road);
	return (lem);
}


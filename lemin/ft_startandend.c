
#include "includes/lemin.h"

char	*ft_startandend(t_parse *room, int i)
{
	t_parse *tmp;
	char	*start;
	char	*end;
	t_parse *com;

	tmp = room;
	end = NULL;
	start = NULL;
	com = NULL;
	while (tmp)
	{
		if (tmp->str[0] == '#' && tmp->str[1] != '#')
		{
			ft_addend(tmp->str, &com);
			tmp = tmp->next;
		}
		else if((!ft_strcmp("##start", tmp->str) &&
					!ft_strcmp("##end", tmp->next->str))
			|| (!ft_strcmp("##start", tmp->str) &&
				!ft_strcmp("##end", tmp->next->str)))
		{
			ft_putstr("ERROR");
			return (0);
		}
		else if (!ft_strcmp("##start", tmp->str))
			start = tmp->next->str;
		else if (!ft_strcmp("##end", tmp->str))
			end = tmp->next->str;
		tmp = tmp->next;
	}
	if (!start || !end)
	{
		ft_putstr("ERROR");
		return (NULL);
	}
	if (i == 1 && end)
		return (end);
	if (i == 0 && start)
		return (start);
	return (NULL);
}

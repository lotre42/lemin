
#include "includes/lemin.h"

char	*ft_startandend(t_parse *room, int i)
{
	t_parse *tmp;
	char	*start;
	char	*end;

	tmp = room;
	end = NULL;
	start = NULL;
	while (tmp)
	{
		if (!ft_strcmp("##start", tmp->str))
			start = tmp->next->str;
		if (!ft_strcmp("##end", tmp->str))
			end = tmp->next->str;
		tmp = tmp->next;
	}
	if (i == 1 && end)
		return (end);
	if (i == 0 && start)
		return (start);
	return (NULL);
}

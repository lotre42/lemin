
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
		if((!ft_strcmp("##start", tmp->str) &&
					!ft_strcmp("##end", tmp->next->str))
			|| (!ft_strcmp("##start", tmp->str) &&
				!ft_strcmp("##end", tmp->next->str)))
		{
			ft_putstr("ERROR");
			return (0);
		}
		else if (!ft_strcmp("##start", tmp->str))
			start = ft_strdup(tmp->next->str);
		else if (!ft_strcmp("##end", tmp->str))
			end = ft_strdup(tmp->next->str);
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

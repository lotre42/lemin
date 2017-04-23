
#include "includes/lemin.h"

int	ft_listlen(t_parse *list)
{
	int i;
	
	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

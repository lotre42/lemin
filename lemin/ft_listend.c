
#include "includes/lemin.h"

char	*ft_listend(t_parse *list)
{
	while (list->next)
		list = list->next;
	return (list->str);
}

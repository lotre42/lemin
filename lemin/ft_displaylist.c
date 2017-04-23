
#include "includes/lemin.h"

void	ft_displaylist(t_parse *list)
{
	t_parse *display;
	
	display = list;
	while (display)
	{
		ft_putendl(display->str);
		display = display->next;
	}
}


#include "includes/lemin.h"

char	*ft_lastword(char *str)
{
	char	*last;
	int	i;
	int	j;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	j = i;
	while (str[i] != '-' && i > 0)
		i--;
	last = malloc(sizeof(char) * (j - i) + 1);
	i++;
	j = 0;
	while (str[i] != '\0')
	{
		last[j] = str[i];
		i++;
		j++;
	}
	last[j] = '\0';
	return (last);
}

char	*ft_firstword(char *str)
{
	char	*start;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == ' ' && str[i] != '\0')
		i++;
	j = i;
	while (str[i] != ' ' && str[i] != '\0')
		i++;
	start = malloc(sizeof(char) * (i - j) + 1);
	i = 0;
	while (str[j] != ' ' && str[i] != '\0')
	{
		start[j] = str[j];
		i++;
		j++;
	}
	start[j] = '\0';
	return (start);
}

int	ft_searchbestroad(t_parse *rooms, t_parse *road)
{
	t_parse *tmp;
	t_parse *chemin;
	char	*room;
	char	*end;
	int	x;
	
	chemin = NULL;
	x = 0;
	end = ft_startandend(rooms, 1);
	if (!end)
		return (0);
	room = ft_startandend(rooms, 0);
	if (!room)
		return (0);
	ft_addend(room, &chemin);
	tmp = road;
/*	while (tmp != NULL)
	{
		tmp = road;
		while (ft_strncmp(tmp->str, room, ft_strlen(room)) && tmp != NULL)
			tmp = tmp->next;
		if (tmp)
		{
			room = ft_lastword(tmp->str);
			ft_addend(room, &chemin);
		}
	}
	ft_displaylist(chemin);
//	ft_putstr(ft_listend(chemin));*/
	return (1);
}


#ifndef LENIN_H
# define LEMIN_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/includes/libft.h"

typedef struct		s_parse
{
	char			*str;
	struct s_parse 		*next;
}			t_parse;

typedef struct		s_info
{
	char			*start;
	char			*end;
}			t_info;

typedef struct		s_stock
{
	int			nb;
	struct s_parse		*room;
	struct s_parse 		*road;
	struct s_parse 		*next;
}			t_stock;


int			ft_add(char *str, t_parse **add);
int			ft_addend(char *str, t_parse **add);
t_parse			*ft_parse(int argc, char **argv);
int			main(int argc, char **argv);
void			ft_displaylist(t_parse *list);
char			*ft_startandend(t_parse *room, int i);
void			ft_searchbestroad(t_parse *room, t_parse *road);
char			*ft_firstword(char *str);
char			*ft_lastword(char *str);
t_parse			*ft_cpypile(t_parse  *pilea);
int			ft_listlen(t_parse *list);
char			*ft_listend(t_parse *list);

#endif


#ifndef LEMIN_H
# define LEMIN_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/includes/libft.h"

typedef struct		s_parse
{
	char			*str;
	struct s_parse 		*next;
}			t_parse;

typedef struct		s_tree
{
	char	*str;
	struct s_List *child;
}			t_tree;

typedef struct		s_List
{
	t_tree *node;
	struct s_List *next;
}					t_List;

int			ft_add(char *str, t_parse **add);
int			ft_addend(char *str, t_parse **add);
t_parse			*ft_parse(int argc, char **argv);
int			main(int argc, char **argv);
void			ft_displaylist(t_parse *list);
char			*ft_startandend(t_parse *room, int i);
int			ft_searchbestroad(t_parse *room, t_parse *road);
char			*ft_firstword(char *str);
char			*ft_lastword(char *str);
t_parse			*ft_cpypile(t_parse  *pilea);
int			ft_listlen(t_parse *list);
char			*ft_listend(t_parse *list);
t_tree			*ft_firsttree(t_parse *room, t_parse *road);
t_List			*ft_createlist(char *str, t_parse *road, char *father, t_parse **file, t_parse *room);
char			*ft_searchroominroad(char *str);
char			*ft_firstroominroad(char *str);
t_List			*ft_build(t_tree *tree, t_List *lst);
t_tree			*ft_createtree(char *str, t_parse *road, t_parse *room, t_parse **file);
char			*ft_searchchild(char *str, t_parse *road, t_parse *file, t_parse *room);
char			*ft_searchbrother(char *str, t_parse *road, char *father, t_parse *file, t_parse *room);
int				ft_searchinlist(char *str, t_parse *file);
int				ft_searchinroom(t_parse *room, char *str);

#endif

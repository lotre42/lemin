# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/04 15:33:12 by kahantar          #+#    #+#              #
#    Updated: 2017/05/11 23:34:10 by kahantar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= lem_in
CC	= gcc
FLAGS 	= -Wall -Werror -Wextra

SRCS =  ft_add.c \
	ft_addend.c \
	ft_addroad.c \
	main.c \
	ft_parse.c \
	ft_checklevel.c \
	ft_displaylist.c \
	ft_displayroad.c \
	ft_startandend.c \
	ft_lastword.c \
	ft_listend.c \
	ft_listlen.c \
	ft_cpypile.c \
	ft_createtree.c \
	ft_searchroominroad.c \
	ft_roominroad.c \
	ft_firstroominroad.c \
	ft_createlist.c \
	ft_searchchild.c \
	ft_searchbrother.c \
	ft_searchinroom.c \
	ft_errorinroom.c \
	ft_build.c \
	ft_searchlittleroad.c \
	ft_searchinlist.c \
	ft_freepile.c \
	ft_freeroad.c \
	ft_formatroad.c \
	ft_freetree.c \
	ft_freestock.c \
	ft_freetab.c \
	ft_totalleaks.c \
	ft_nbant.c \
	ft_freeanderror.c \
	ft_displayant.c \
	ft_searchlevel.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/
	$(CC) -o $(NAME) $(SRCS) -L./libft/ -lft

clean:
	@rm -rf $(OBJ)
	make clean -C libft/

fclean: clean
	@rm -rf $(NAME)
	make fclean -C libft/

re: fclean all

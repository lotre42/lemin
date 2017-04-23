# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/04 15:33:12 by kahantar          #+#    #+#              #
#    Updated: 2017/04/05 14:41:57 by kahantar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= lem_in
CC	= gcc
FLAGS 	= -Wall -Werror -Wextra

SRCS =  ft_add.c \
	ft_addend.c \
	main.c \
	ft_parse.c \
	ft_displaylist.c \
	ft_startandend.c \
	ft_searchbestroad.c \
	ft_listend.c \
	ft_listlen.c \
	ft_cpypile.c

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

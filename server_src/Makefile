#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/18 13:09:22 by amaurer           #+#    #+#              #
#    Updated: 2014/02/07 19:35:06 by amaurer          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFT = -Ilibft/include
NAME = serveur
PATH_INC = include
PATH_OBJ = obj
PATH_SRC = src
SRC = $(shell ls -1 src | grep .c)
OBJ = $(patsubst %.c, $(PATH_OBJ)/%.o, $(SRC))

all : libft makename $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -Llibft -lft -I$(PATH_INC)
	@echo " done !"

libft:
	@make -C libft

$(PATH_OBJ)/%.o : $(addprefix $(PATH_SRC)/, %.c)
	@echo -n .
	@mkdir -p $(PATH_OBJ)
	@$(CC) -I$(PATH_INC) $(LIBFT) $(CFLAGS) -o $@ -c $^

clean :
	@rm -f $(OBJ)
	@make -C libft clean

fclean : clean
	@rm -f $(NAME)
	@make -C libft fclean

re : fclean all

makename:
	@echo Compilation de $(NAME) :

.PHONY: $(NAME) all clean fclean re libft

#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 13:13:41 by amaurer           #+#    #+#              #
#    Updated: 2013/12/22 15:28:34 by amaurer          ###   ########.fr        #
#                                                                              #
#******************************************************************************#
CC = cc
NAME = libft.a
PATH_OBJ = obj
PATH_SRC = src
PATH_INC = include
CFLAGS = -Wall -Werror -Wextra -I$(PATH_INC)
SRC = $(shell ls -1 $(PATH_SRC) | grep .c)
OBJ = $(patsubst %.c, $(PATH_OBJ)/%.o, $(SRC))

all : makename $(NAME)

$(NAME) : $(OBJ)
	@ar rc $@ $^
	@ranlib $@
	@echo " done !"

$(PATH_OBJ)/%.o : $(addprefix $(PATH_SRC)/, %.c)
	@echo -n .
	@mkdir -p $(PATH_OBJ)
	@$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

makename:
	@echo Compilation de $(NAME) :

.PHONY: all clean fclean re $(NAME)

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/08 14:40:28 by atodorov          #+#    #+#              #
#    Updated: 2014/02/08 14:42:36 by atodorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client

SRC_C = client.c

SRC_O = $(subst .c,.o,$(SRC))

all:	$(NAME)

$(NAME):
	make -C ./libft/
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC_C) libft/libft.a

clean:
	make -C ./libft/ clean
	/bin/rm -f $(SRC_O)

fclean: clean
	make -C ./libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all

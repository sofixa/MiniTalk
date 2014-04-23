# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/08 15:44:43 by atodorov          #+#    #+#              #
#    Updated: 2014/02/08 15:52:12 by atodorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make -C ./client_src/
	mv ./client_src/client .
	make -C ./server_src/
	mv ./server_src/serveur .

clean:
	make -C ./client_src/ clean
	make -C ./server_src/ clean

fclean:	clean
	make -C ./client_src/ fclean
	make -C ./server_src/ fclean
	/bin/rm -f serveur
	/bin/rm -f client

re:		fclean all

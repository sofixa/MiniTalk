# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 18:46:22 by atodorov          #+#    #+#              #
#    Updated: 2013/12/29 19:34:53 by atodorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

FLAG = -Werror -Wall -Wextra

SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_atoi.c ft_tolower.c ft_toupper.c\
ft_strcat.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c\
ft_memalloc.c ft_memdel.c ft_strdel.c ft_strnew.c ft_strlen.c ft_memset.c\
ft_strcmp.c ft_strncmp.c ft_strcpy.c ft_strncpy.c ft_strclr.c ft_strdup.c\
ft_bzero.c ft_putendl.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c\
ft_strjoin.c ft_strstr.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c\
ft_putnbr_fd.c ft_putendl_fd.c ft_memchr.c ft_memccpy.c ft_memmove.c\
ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strnequ.c ft_strncat.c ft_strnstr.c\
ft_strequ.c ft_strlcat.c ft_itoa.c ft_strtrim.c ft_strsub.c ft_strsplit.c\
ft_putstrn.c ft_putstr_space.c get_next_line.c ft_realloc.c\

OBJECTS = $(SRC:.c=.o)

RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
		$(CC) -c $(FLAG) $(SRC)
			ar -rc $(NAME) $(OBJECTS)
				ranlib $(NAME)

$(OBJECT): $(SRC)
		$(CC) -c $(FLAG) $(SRC)

clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all


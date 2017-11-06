# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpetras <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 18:10:36 by fpetras           #+#    #+#              #
#    Updated: 2017/11/06 18:13:56 by fpetras          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ft_display_file.o

CC = gcc

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

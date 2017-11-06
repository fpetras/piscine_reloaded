# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpetras <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 16:55:06 by fpetras           #+#    #+#              #
#    Updated: 2017/11/06 17:44:11 by fpetras          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_putchar.c \
	  src/ft_putstr.c \
	  src/ft_strcmp.c \
	  src/ft_strlen.c \
	  src/ft_swap.c

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o

INC = includes/

CC = gcc

FLAGS = -c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -I$(INC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


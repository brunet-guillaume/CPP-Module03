# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 16:28:47 by gbrunet           #+#    #+#              #
#    Updated: 2024/02/13 09:28:14 by gbrunet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = main.o ClapTrap.o ScavTrap.o FragTrap.o

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean :
	make clean
	$(RM) $(NAME)

re :
	make fclean
	make all

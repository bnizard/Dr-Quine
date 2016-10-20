#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnizard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/20 18:22:44 by bnizard           #+#    #+#              #
#    Updated: 2016/10/20 18:22:56 by bnizard          ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME1 = Colleen
NAME2 = Grace
NAME3 = Sully
CC = gcc $(FLAGS)
SRC1 = Colleen.c
SRC2 = Grace.c
SRC3 = Sully.c
OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)
FLAGS = -Wall -Wextra -Werror
all:	$(NAME1) $(NAME2) $(NAME3)
$(NAME1):	$(LIB) $(OBJ1)
				@echo "\t\t[Make] $(NAME1)\t\t" | tr -d '\n'
				$(CC) -o $(NAME1) $(OBJ1)
				@echo "\033[32mOK\033[0m"
$(NAME2):	$(LIB) $(OBJ2)
				@echo "\t\t[Make] $(NAME2)\t\t" | tr -d '\n'
				$(CC) -o $(NAME2) $(OBJ2)
				@echo "\033[32mOK\033[0m"
$(NAME3):	$(LIB) $(OBJ3)
				@echo "\t\t[Make] $(NAME3)\t\t" | tr -d '\n'
				$(CC) -o $(NAME3) $(OBJ3)
				@echo "\033[32mOK\033[0m"
clean:
				@echo "\t\t[clean] .o files\t" | tr -d '\n'
				rm -f $(OBJ1) $(OBJ2) $(OBJ3)
				@echo "\033[32mOK\033[0m"
fclean:
				@echo "\t\t[clean] .o files\t\033[32mOK\033[0m"
				@echo "\t\trm $(NAME1) $(NAME2) $(NAME3)\t" | tr -d '\n'
				rm -f $(OBJ1) $(OBJ2) $(OBJ3) $(NAME1) $(NAME2) $(NAME3)
				@echo "\033[32mOK\033[0m"
re:				fclean all
.PHONY:			all clean re fclean
.SILENT:
%.o:			%.c
				$(CC) -c $< -o $@
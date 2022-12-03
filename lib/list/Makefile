##
## EPITECH PROJECT, 2022
## list
## File description:
## Makefile
##

NAME	=	list
SRC		=	list_create.c	\
			list_add.c		\
			list_get.c		\
			list_remove.c	\
			list_destroy.c	\
			list_sort.c
OBJ		=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-I./../../include/ -Wall -Wextra -g
LDFLAGS	=	-L.

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc lib$@.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f lib$(NAME).a

re:			fclean all

.PHONY:		all clean fclean re

.SILENT:

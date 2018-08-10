##
## EPITECH PROJECT, 2018
## Cook
## File description:
## Makefile
##

SRC     =	src/main.c	\
		src/home.c	\
		src/game.c	\
		src/menu.c	\
		src/cook.c	\
		src/pizza.c	\
		src/init_text.c	\
		src/destroy.c	\
		src/cook_event.c

OBJ     =       $(SRC:.c=.o)

CFLAGS	=	-I inc -Wall -Wextra

NAME    =       my_cook

LIB	=	lib/my

all:    $(NAME)

$(NAME):        $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -lc_graph_prog

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: clean fclean all

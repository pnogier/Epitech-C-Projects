##
## EPITECH PROJECT, 2018
## Cook
## File description:
## Makefile
##

SRC     =	src/main.c	\
		src/window.c		\
		src/init/init_text.c	\
		src/init/set_sprite.c	\
		src/loop.c		\
		src/display/display.c	\
		src/move.c		\
		src/destroy.c		\
		src/main_menu.c

OBJ     =       $(SRC:.c=.o)

CFLAGS	=	-I inc -Wall -Wextra

NAME    =       my_rpg

PROGRAM	=	my_rpg

all:   $(NAME)

$(NAME):        $(OBJ)
	wget -P extern_libs ftp://xmlsoft.org/libxml2/libxml2-2.8.0.tar.gz
	cd extern_libs ; tar xzf libxml2-2.8.0.tar.gz ; cd libxml2-2.8.0 ; ./configure ; make ; sudo make install
	git clone https://github.com/baylej/tmx.git
	mv tmx/ extern_libs/
	cd extern_libs/tmx/ ; mkdir build ; cd build ; cmake .. ; make && make install
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -lc_graph_prog

rpg:	$(OBJ)
	gcc $(CFLAGS) -o $(PROGRAM) $(OBJ) -L /usr/local/lib/ -lcsfml-graphics -lcsfml-window -lcsfml-system -lz -lxml2 -ltmx

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

cleanlib:
	rm -rf extern_libs/*

re: clean fclean all

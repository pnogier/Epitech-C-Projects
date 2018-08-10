##
## EPITECH PROJECT, 2017
## Bootstrap my_printf
## File description:
## Makefile lib
##

SRC     =	sum_stdarg.c	\
		my_strlen.c	\
		disp_stdarg.c	\
		my_put.c	\
		my_revstr.c	\
		my_printf.c	\
		put_base_functions.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:    $(NAME)

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all

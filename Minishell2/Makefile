##
## EPITECH PROJECT, 2017
## Bootstrap my_hunter
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/commands.c	\
		src/tmp.c	\
		src/exec.c

SRCLIB	=	lib/my/get_next_line.c	\
		lib/my/disp_stdarg.c	\
		lib/my/my_printf.c	\
		lib/my/my_put_long.c	\
		lib/my/my_put.c		\
		lib/my/my_revstr.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strcmp.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strcat.c	\
		lib/my/put_base_functions.c	\
		lib/my/my_str_to_wordtab.c

CFLAGS	=	-I include -Wall -Wextra

OBJLIB	=	$(SRCLIB:.c=.o)

OBJ	=	$(SRC:.c=.o)

NAMELIB	=	lib/my/libmy.a

NAME	=	mysh

LIB	=	lib/my

all:    $(NAMELIB) $(NAME)

$(NAMELIB):	$(OBJLIB)
	ar rc $(NAMELIB) $(OBJLIB)

$(NAME):	$(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -L $(LIB) -lmy

clean:
	rm -rf $(OBJ) $(OBJLIB)

fclean:
	rm -rf $(NAME) $(NAMELIB)

re: clean fclean all

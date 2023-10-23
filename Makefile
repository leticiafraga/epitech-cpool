##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	mini_printf.c \
		my_putchar.c \
		my_putnbr.c \
		my_putstr.c \
		my_strlen.c

NAME	=	unit_tests

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) tests/test.c -I../include \
	-lcriterion --coverage && ./$(NAME)

clean:
	rm -f $(OBJ) *~ *.gcda *.gcno

fclean: clean
	rm -f $(NAME)

re: fclean all

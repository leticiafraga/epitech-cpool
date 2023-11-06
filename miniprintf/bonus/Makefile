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
	cd .. && gcc -o $(NAME) $(SRC) bonus/tests/test.c -I../include \
	-lcriterion --coverage && ./$(NAME) && cd bonus

clean:
	cd .. && rm -f $(OBJ) *~ *.gcda *.gcno && cd bonus

fclean: clean
	cd .. && rm -f $(NAME) && cd bonus

re: fclean all

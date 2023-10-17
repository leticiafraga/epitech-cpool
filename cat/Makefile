##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile 1
##

SRC	=	main.c \
		read_files.c

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all: lib $(NAME)

lib:
	cd ../lib/my && make && cd ../../cat

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L../lib/ -lmy -I../include

tests_run:
	gcc $(SRC) ../tests/test.c -L../lib/ -lmy -I../include --coverage -lcriterion
tests:
	./unit_tests

clean:
	rm -f $(OBJ) *~

fclean: clean
	rm -f $(NAME)

re: fclean all

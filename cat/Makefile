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

tests_compile:
	gcc -o ../tests/unit_tests read_files.c ../tests/test.c	\
	-L../lib/ -lmy -I../include --coverage -lcriterion

tests_run: tests_compile
	./../tests/unit_tests

clean:
	rm -f $(OBJ) *~ ../lib/my/*.o

fclean: clean
	rm -f $(NAME)

tests_fclean:
	rm -f unit_tests *~ *.gcda *.gcno

re: fclean all

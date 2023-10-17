##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile 1
##

SRC	=	main.c \

TEST_SRC = 	read_files.c \
                read_input.c

OBJ	=	$(SRC:.c=.o)

NAME	=	grep

all: lib $(NAME)

lib:
	cd ../lib/my && make && cd ../../cat

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L../lib/ -lmy -I../include -Wall -Wextra

tests_compile:
	gcc -o unit_tests $(TEST_SRC) ../tests/test.c	\
	-L../lib/ -lmy -I../include --coverage -lcriterion

tests_run: tests_compile
	./unit_tests

clean:
	rm -f $(OBJ) *~ ../lib/my/*.o

fclean: clean
	rm -f $(NAME)

tests_fclean:
	rm -f unit_tests *~ *.gcda *.gcno

re: fclean all

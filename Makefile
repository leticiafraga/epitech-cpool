##
## EPITECH PROJECT, 2023
## makefile
## File description:
## my first make file
##

SRC     =	main.c	\
		rectangle1.c \
		rectangle2.c \
		rectangle3.c \
		rectangle4_5.c \
		other_recs.c \
		other_recs_same.c \
		rush3.c	\
		check_line.c

TEST_SRC= 	rectangle1.c \
		rectangle2.c \
		rectangle3.c \
		rectangle4_5.c \
		other_recs.c \
		other_recs_same.c \
		rush3.c \
		check_line.c

TEST	=	tests/rush1_1_test.c \
		tests/rush1_2_test.c \
		tests/rush1_1_none_test.c

CRFLAGS	=	-I $(LIB) --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

LIB	=	/include/

LIBNAME	=	libmy.a

.PHONY: all lib

all:	lib $(NAME)

lib:
	cd lib/my && make && cd ../..

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy -I./include/

tests_run: lib
	gcc $(TEST_SRC) $(TEST) $(CRFLAGS) -L./lib/my -lmy
	./a.out

clean:
	cd lib/my && make clean && cd ../..
	rm -f $(OBJ) *~ ./lib/my/*.o

fclean:	clean
	rm -f $(NAME) lib/my/$(LIBNAME) *.gcda *.gcno

re:     fclean all

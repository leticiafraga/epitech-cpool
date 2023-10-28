##
## EPITECH PROJECT, 2023
## makefile
## File description:
## my first make file
##

SRC     =	main.c	\
		rectangle1.c \
		rush3.c

TEST	=	tests/test.c \
		tests/rush1_2_test.c

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
	gcc rush3.c $(TEST) $(CRFLAGS) -L./lib/my -lmy
	./a.out

clean:
	cd lib/my && make clean && cd ../..
	rm -f $(OBJ) *~ ./lib/my/*.o

fclean:	clean
	rm -f $(NAME) lib/my/$(LIBNAME)

re:     fclean all

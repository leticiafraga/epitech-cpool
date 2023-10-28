##
## EPITECH PROJECT, 2023
## makefile
## File description:
## my first make file
##

SRC     =	main.c	\
		rush3.c

TEST	=	tests/unit_tests.c

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

tests_run:
	gcc $(SRC) $(TEST) $(CRFLAGS)
	./a.out

clean:
	rm -f $(OBJ) *~ ./lib/my/*.o

fclean:	clean
	rm -f $(NAME) lib/my/$(LIBNAME)

re:     fclean all

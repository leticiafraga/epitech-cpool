##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile 1
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all: lib $(NAME)

lib: 
	cd ../lib/my && make && cd ../../cat

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L../lib/ -lmy -I../include

clean:
	rm -f $(OBJ) *~

fclean: clean
	rm -f $(NAME)

re: fclean all

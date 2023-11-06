##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile 1
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	do-op

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L../lib/ -lmy

clean:
	rm -f $(OBJ) *~

fclean: clean
	rm -f $(NAME)

re: fclean all

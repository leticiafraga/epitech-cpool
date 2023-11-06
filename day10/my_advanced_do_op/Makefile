##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile 1
##

SRC	=	main.c \
		operations.c \
		put_err.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_advanced_do-op

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L../lib/ -lmy -I../include

clean:
	rm -f $(OBJ) *~

fclean: clean
	rm -f $(NAME)

re: fclean all

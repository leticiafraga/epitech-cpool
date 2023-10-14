##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile for Rush 2
##

SRC	=	../main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush2

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L../lib/my -lmy -I../include

clean:
	rm -f $(OBJ) *~

fclean: clean
	rm -f $(NAME)

re: fclean all

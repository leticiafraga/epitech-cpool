##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile 1
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME) cp

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(OBJ)

cp:
	cp $(NAME) ../$(NAME) && cp my.h ../../include/my.h

clean:
	rm -f $(OBJ) *~

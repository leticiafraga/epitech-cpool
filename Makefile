##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile 1
##

SRC	=	btree_create_node.c

OBJ	=	$(SRC:.c=.o)

NAME	=	tree

LIBTREE = 	libbtree.a

all: $(LIBTREE)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) \
	-I../include -Wall -Wextra -L. -lbtree

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBTREE)

re: fclean all

$(LIBTREE):        $(OBJ)
	ar rc -o $(LIBTREE) $(OBJ)

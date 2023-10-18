##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile 1
##

SRC	=	btree_create_node.c  \
		btree_apply_prefix.c \
		btree_apply_infix.c  \
		btree_apply_suffix.c \
		btree_insert_data.c  \
		btree_search_item.c  \
		btree_level_count.c  \
		btree_apply_by_level.c

OBJ	=	$(SRC:.c=.o)

NAME	=	tree

LIBTREE = 	libbtree.a

all: $(LIBTREE)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) main.c \
	-I../include -Wall -Wextra -L. -lbtree

clean:
	rm -f $(OBJ) *~

fclean: clean
	rm -f $(LIBTREE)

re: fclean all

$(LIBTREE):        $(OBJ)
	ar rc -o $(LIBTREE) $(OBJ)

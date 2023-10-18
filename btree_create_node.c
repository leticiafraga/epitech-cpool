/*
** EPITECH PROJECT, 2023
** BTREE_CREATE_NODE
** File description:
** Creates node for btree
*/

#include <stdlib.h>
#include "include/btree.h"

btree_t *btree_create_node(void *item)
{
    btree_t *n = malloc(sizeof(btree_t));

    n->item = item;
    n->left = 0;
    n->right = 0;
    return n;
}

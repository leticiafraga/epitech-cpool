/*
** EPITECH PROJECT, 2023
** BTREE_INSERT_DATA
** File description:
** Inserts data to tree
*/
#include "include/btree.h"

void btree_insert_data(btree_t **root, void *item, int (*cmpf)())
{
    btree_t *r = *root;
    btree_t *child;

    if (cmpf(r->item, item) < 0) {
        if (r->right != 0) {
            btree_insert_data(r->right, item, cmpf);
        } else {
            child = btree_create_node(item);
            r->right = child;
        }
    } else {
        if (r->left != 0) {
            btree_insert_data(r->left, item, cmpf);
        } else {
            child = btree_create_node(item);
            r->left = child;
        }
    }
}

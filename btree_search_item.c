/*
** EPITECH PROJECT, 2023
** BTREE_APPLY_INFIX
** File description:
** Applies infix
*/
#include "include/btree.h"

void *btree_search_item(btree_t const *root,
    void const *data_ref, int(*cmpf) ())
{
    btree_t *found = 0;

    if (root->left != 0)
        found = btree_search_item(root->left, data_ref, cmpf);
    if (found == 0 && root->item != 0) {
        if (cmpf(root->item, data_ref) == 0)
            return (btree_t *) root;
    }
    if (found == 0 &&root->right != 0)
        found = btree_search_item(root->right, data_ref, cmpf);
    return found;
}

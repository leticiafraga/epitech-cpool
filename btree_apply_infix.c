/*
** EPITECH PROJECT, 2023
** BTREE_APPLY_INFIX
** File description:
** Applies infix
*/
#include "include/btree.h"

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (root->left != 0)
        btree_apply_infix(root->left, applyf);
            if (root->item != 0)
                applyf(root->item);
    if (root->right != 0)
        btree_apply_infix(root->right, applyf);
}

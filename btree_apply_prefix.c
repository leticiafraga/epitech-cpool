/*
** EPITECH PROJECT, 2023
** BTREE_APPLY_PREFIX
** File description:
** Applies fn to nodes
*/
#include "include/btree.h"

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    if (root->item == 0)
        return;
    applyf(root->item);
    if (root->left != 0)
        btree_apply_prefix(root->left, applyf);
    if (root->right != 0)
        btree_apply_prefix(root->right, applyf);
}

/*
** EPITECH PROJECT, 2023
** BTREE_APPLY_SUFFIX
** File description:
** Applies suffix
*/
#include "include/btree.h"

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{
    if (root->left != 0)
        btree_apply_suffix(root->left, applyf);
    if (root->right != 0)
        btree_apply_suffix(root->right, applyf);
    if (root->item != 0)
        applyf(root->item);
}

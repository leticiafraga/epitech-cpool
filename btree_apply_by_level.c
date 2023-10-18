/*
** EPITECH PROJECT, 2023
** BTREE_APPLY_BY_LEVEL
** File description:
** Applies by level
*/
#include "include/btree.h"

static void apply_rec(btree_t *root, int level, int first,
    void (*applyf)(void *item, int level, int is_first_elem))
{
    applyf(root->item, level, 1);
    if (root->left != 0)
        apply_rec(root->left, level + 1, 1, applyf);
    if (root->right != 0)
        apply_rec(root->right, level + 1, 1, applyf);
}

void btree_apply_by_level(btree_t *root,
    void (*applyf)(void *item, int level, int is_first_elem))
{
    apply_rec(root, 0, 1, applyf);
}

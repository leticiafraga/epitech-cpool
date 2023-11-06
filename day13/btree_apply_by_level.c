/*
** EPITECH PROJECT, 2023
** BTREE_APPLY_BY_LEVEL
** File description:
** Applies by level
*/
#include "include/btree.h"

static int apply_rec(btree_t *root, int level, int maxlevel,
    void (*applyf)(void *item, int level, int is_first_elem))
{
    int first = 0;

    if (maxlevel < level) {
        maxlevel = level;
        first = 1;
    }
    applyf(root->item, level, first);
    if (root->left != 0)
        maxlevel = apply_rec(root->left, level + 1, maxlevel, applyf);
    if (root->right != 0)
        maxlevel = apply_rec(root->right, level + 1, maxlevel, applyf);
    return maxlevel;
}

void btree_apply_by_level(btree_t *root,
    void (*applyf)(void *item, int level, int is_first_elem))
{
    apply_rec(root, 0, -1, applyf);
}

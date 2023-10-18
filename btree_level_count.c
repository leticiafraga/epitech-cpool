/*
** EPITECH PROJECT, 2023
** BTREE_LEVEL_COUNT
** File description:
** Counts levels
*/
#include "include/btree.h"
#include <stddef.h>
size_t btree_level_count(btree_t const *root)
{
    int countL = 0;
    int countR = 0;
    int finalCount = 1;

    if (root->left != 0) {
        countL += btree_level_count(root->left);
    }
    if (root->right != 0)
        countR = btree_level_count(root->right);
    if (countL > countR)
        finalCount += countL;
    else
        finalCount += countR;
    return finalCount;
}

/*
** EPITECH PROJECT, 2023
** MY_APPLY_ON_NODES
** File description:
** Applies f on nodes of list
*/

#include "include/mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin,
    void const * data_ref, int (*cmp)())
{
    linked_list_t *cur = begin;

    while (cur != 0) {
        if (cmp(cur->data, data_ref) == 0)
            return cur;
        cur = cur->next;
    }
    return cur;
}

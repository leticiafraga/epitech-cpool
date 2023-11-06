/*
** EPITECH PROJECT, 2023
** MY_APPLY_ON_MATCHING_NODES
** File description:
** Applies f on matching nodes of list
*/

#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f) (),
    void const *data_ref, int (*cmp)())
{
    linked_list_t *cur = begin;

    while (cur != 0) {
        if (cmp(cur->data, data_ref) == 0)
            f(cur->data);
        cur = cur->next;
    }
    return 0;
}

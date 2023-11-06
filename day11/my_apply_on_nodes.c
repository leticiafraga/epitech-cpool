/*
** EPITECH PROJECT, 2023
** MY_APPLY_ON_NODES
** File description:
** Applies f on nodes of list
*/

#include "include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f) (void *))
{
    linked_list_t *cur = begin;

    while (cur != 0) {
        f(cur->data);
        cur = cur->next;
    }
    return 0;
}

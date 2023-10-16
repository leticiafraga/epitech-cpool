/*
** EPITECH PROJECT, 2023
** MY_APPLY_ON_NODES
** File description:
** Applies f on nodes of list
*/
#include <stdlib.h>
#include "include/mylist.h"

int remove(linked_list_t **begin,
    linked_list_t *cur, linked_list_t *prev)
{
    if (*begin == cur) {
        *begin = cur->next;
        prev = *begin;
    } else
        prev->next = cur->next;
    return 0;
}

int my_delete_nodes(linked_list_t **begin,
    void const *data_ref, int (*cmp)())
{
    linked_list_t *cur = *begin;
    linked_list_t *prev;
    int first = 1;

    while (cur != 0) {
        if (cmp(cur->data, data_ref) == 0) {
            remove(begin, cur, prev);
        } else
            prev = cur;
        cur = prev->next;
    }
    return 0;
}

/*
** EPITECH PROJECT, 2023
** MY_SORT_LIST
** File description:
** Sorts list
*/

#include "include/mylist.h"

static void check_min(linked_list_t **cur, linked_list_t **sm,
    int (*cmp) ())
{
    while (*cur != 0) {
        if (cmp((*cur)->data, (*sm)->data) < 0) {
            (*sm) = (*cur);
        }
        (*cur) = (*cur)->next;
    }
}

void my_sort_list(linked_list_t **begin, int (*cmp) ())
{
    linked_list_t *cur = *begin;
    linked_list_t *sm = *begin;
    void *swap = 0;
    linked_list_t *it = *begin;

    while (it != 0) {
        check_min(&cur, &sm, cmp);
        if (sm != it) {
            swap = sm->data;
            sm->data = it->data;
            it->data = swap;
        }
        it = it->next;
        cur = it;
        sm = it;
    }
}

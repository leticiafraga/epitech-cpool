/*
** EPITECH PROJECT, 2023
** MY_SORT_LIST
** File description:
** Sorts list
*/

#include "include/mylist.h"

static void add_item(linked_list_t **begin,
    linked_list_t *item, linked_list_t *cur, linked_list_t *prev)
{
    if (prev == 0) {
        *begin = item;
        item->next = cur;
    } else {
        item->next = prev->next;
        prev->next = item;
    }
}

static void my_add_item_in_sorted_list(linked_list_t **begin,
    linked_list_t *item, int (*cmp)())
{
    linked_list_t *cur = *begin;
    linked_list_t *prev = 0;

    while (cur != 0) {
        if (cmp(cur->data, item->data) > 0) {
            add_item(begin, item, cur, prev);
            break;
        }
        prev = cur;
        cur = cur->next;
    }
}


void my_merge(linked_list_t **begin1,
    linked_list_t *begin2, int (*cmp) ())
{
    linked_list_t *it2 = begin2;
    linked_list_t *next = begin2;

    while (it2 != 0) {
        next = it2->next;
        my_add_item_in_sorted_list(begin1, it2->data, cmp);
        it2 = next;
    }
}

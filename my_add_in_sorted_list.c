/*
** EPITECH PROJECT, 2023
** MY_ADD_IN_SORTED_LIST
** File description:
** Sorts list
*/
#include <stdlib.h>
#include "include/mylist.h"

void add_item(linked_list_t **begin,
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

void my_add_in_sorted_list(linked_list_t **begin,
    void *data, int (*cmp)())
{
    linked_list_t *item;
    linked_list_t *cur = *begin;
    linked_list_t *prev = 0;

    item = malloc(sizeof(linked_list_t));
    item->data = data;
    while (cur != 0) {
        if (cmp(cur->data, data) > 0) {
            add_item(begin, item, cur, prev);
            break;
        }
        prev = cur;
        cur = cur->next;
    }
}

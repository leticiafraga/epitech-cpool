/*
** EPITECH PROJECT, 2023
** MY_SORT_LIST
** File description:
** Sorts list
*/

#include "include/mylist.h"

void my_merge(linked_list_t **begin1,
    linked_list_t *begin2, int (*cmp) ())
{
    linked_list_t *it2 = begin2;

    while (it2 != 0) {
        my_add_in_sorted_list(begin1, it2->data, cmp);
        it2 = it2->next;
    }
}

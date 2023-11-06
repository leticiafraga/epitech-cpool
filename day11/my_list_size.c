/*
** EPITECH PROJECT, 2023
** MY_LIST_SIZE
** File description:
** Returns list size
*/

#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int n = 1;
    linked_list_t *cur = begin;

    if (cur == 0)
        return 0;
    while (cur->next != 0) {
        n++;
        cur = cur->next;
    }
    return n;
}

/*
** EPITECH PROJECT, 2023
** MY_LIST_SIZE
** File description:
** Returns list size
*/

#include "include/mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *cur = *begin1;

    while (cur->next != 0) {
        cur = cur->next;
    }
    cur->next = begin2;
}

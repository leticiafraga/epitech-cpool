/*
** EPITECH PROJECT, 2023
** MY_PARAMS_TO_LIST
** File description:
** Return params to list
*/

#include "include/mylist.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *cur;
    linked_list_t *prev;

    for (int i = 0; i < ac; i++) {
        cur = malloc(sizeof(linked_list_t));
        cur->data = av[i];
        if (i != 0)
            cur->next = prev;
        else
            cur->next = 0;
        prev = cur;
    }
    return cur;
}

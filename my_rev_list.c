#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *cur = *begin;
    linked_list_t *prev;
    linked_list_t *swap = 0;

    while (cur != 0) {
        prev = cur->next;
        cur->next = swap;
        swap = cur;
        cur = prev;
    }
    begin = &swap;
}

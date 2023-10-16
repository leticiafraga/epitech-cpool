#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int n = 1;
    linked_list_t *cur = begin;

    while (cur->next != 0) {
        n++;
        cur = cur->next;
    }
    return n;
}

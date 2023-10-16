#include "../include/mylist.h"
linked_list_t *my_params_to_list(int ac, char *const *av);

int main(int ac, char **av)
{
    linked_list_t *cur;
    int count = 0;

    cur = my_params_to_list(ac, av);
    printf("%s\n", cur->data);

    count = my_list_size(cur);
    printf("%d\n", count);
    return 0;
}

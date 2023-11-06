#include "../include/mylist.h"
#include "../include/my.h"
linked_list_t *my_params_to_list(int ac, char *const *av);

int main(int ac, char **av)
{
    linked_list_t *cur;
    int count = 0;

    cur = my_params_to_list(ac, av);
    my_putstr(cur->data);
    my_putchar('\n');
    count = my_list_size(cur);
    my_put_nbr(count);
    return 0;
}

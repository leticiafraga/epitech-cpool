/*
** EPITECH PROJECT, 2023
** MY_SHOW_PARAM_ARRAY
** File description:
** Function that displays the content of an array created
** with my_params_to_array
*/
#include "include/my.h"

int my_show_param_array(struct info_param *const par)
{
    int i = 0;

    while (par[i].str != 0) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
        i++;
    }
    return 0;
}

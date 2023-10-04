/*
** EPITECH PROJECT, 2023
** MY_PRINT_REVAPLHA
** File description:
** Function that, beginning with z, displays the lowercase alphabet
** in descending order, on a single line
*/
#include "my_putchar.h"

int my_print_revalpha(void)
{
    int i;

    for (i = 122; i >= 97; i--) {
        my_putchar(i);
    }
    return 0;
}

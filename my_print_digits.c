/*
** EPITECH PROJECT, 2023
** MY_PRINT_DIGITS
** File description:
** Function that displays all the digits, on a single line, in
** ascending order.
*/
#include "my_putchar.h"

int my_print_digits(void)
{
    int i;

    for (i = 48; i <= 57; i++) {
        my_putchar(i);
    }
}

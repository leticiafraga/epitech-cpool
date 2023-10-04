/*
** EPITECH PROJECT, 2023
** MY_PRINT_COMB
** File description:
** Function that displays all the numbers composed by three different
** digits
*/
#include "my_putchar.h"

int conditional_print(int i, int j, int k)
{
    if (i != j && k != j && k != i){
        my_putchar(i);
        my_putchar(j);
        my_putchar(k);
        if (i == 55 && j == 56 && k == 57) {
            return 0;
        }
        my_putchar(',');
        my_putchar(' ');
    }
    return 1;
}

int validate(int i , int j)
{
    for (int k = j + 1; k < 58; k++) {
        if (conditional_print(i, j, k) == 0) {
            break;
        }
    }
}

int iterate2(void)
{
    for (int i = 48; i < 58; i++) {
        for (int j = i + 1; j < 58; j++) {
            validate(i, j);
        }
    }
    return 0;
}

int my_print_comb(void)
{
    iterate2();
    return 0;
}

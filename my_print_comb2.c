/*
** EPITECH PROJECT, 2023
** MY_PRINT_COMB2
** File description:
** Function that displays, in ascending order, all the different
** combinations of two two-digit numbers
*/
#include "my_putchar.h"

int print_comb1(int i, int j, int k, int m)
{
    my_putchar(i);
    my_putchar(j);
    my_putchar(' ');
    my_putchar(k);
    my_putchar(m);
    if (i == '9' && j == '8') {
        return 0;
    }
    my_putchar(',');
    my_putchar(' ');
    return 1;
}

int my_print_comb2(void)
{
    int i = '0';
    int j = '0';
    int k = '0';
    int m = '0';
    int it1 = 0;
    int it2 = 1;

    do {
        i = (it1 / 10) + '0';
        j = (it1 % 10) + '0';
        it2 = it1 + 1;
        do {
            k = (it2 / 10) + '0';
            m = (it2 % 10) + '0';
            print_comb1(i, j, k, m);
            it2++;
        } while (it2 < 100);
        it1++;
    } while (it1 < 99);
    return 0;
}

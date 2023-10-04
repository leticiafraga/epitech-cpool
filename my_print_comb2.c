/*
** EPITECH PROJECT, 2023
** MY_PRINT_COMB2
** File description:
** Function that displays, in ascending order, all the different
** combinations of two two-digit numbers
*/
#include "my_putchar.h"

int cmp_numbers(int i, int j, int k, int m)
{
    if (i == k && j == m)
        return 0;
    return 1;
}

int my_print_comb2(void)
{
    for (int i = '0'; i < ':'; i++) {
        for (int j = '0'; j < ':'; j++) {
            for (int k = i; k < ':'; k++) {
                for (int m = '0'; m < ':'; m++) {
                    if (k == i && m <= j) {
                        m = j + 1;
                    }
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
                }
            }
        }       
    }
    return 0;
}

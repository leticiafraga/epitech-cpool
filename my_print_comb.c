/*
** EPITECH PROJECT, 2023
** MY_PRINT_COMB
** File description:
** Function that displays all the numbers composed by three different
** digits
*/
#include "my_putchar.h"

int my_print_comb(void)
{
    for (int i = 48; i < 58; i++) {
        for (int j = i + 1; j < 58; j++) {
            for (int k = j + 1; k < 58; k++) {
                if (i != j && k != j && k != i){
                    my_putchar(i);
                    my_putchar(j);
                    my_putchar(k);
                    if (i == 55 && j == 56 && k == 57) {
                        break;
                    }
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }       
    }
    return 0;
}

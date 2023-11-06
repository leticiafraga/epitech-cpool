/*
** EPITECH PROJECT, 2023
** RUSH_1_3
** File description:
** Displays a rectangle with width x and height y
*/
#include <stdio.h>

void print_spaces(int n)
{
    for (int i = 0; i < n; i++) {
        my_putchar(' ');
    }
}

void get_corner(int x, int y, int pos)
{
    if (x == 1 || y == 1)
        my_putchar('B');
    else
        switch (pos) {
        case 0:
            my_putchar('A');
            break;
        default:
            my_putchar('C');
        }
}

void horizontal(int x, int y, int pos)
{
    if (x > 1) {
        get_corner(x, y, pos);
    }
    for (int i = 1; i < x - 1; i++) {
        my_putchar('B');
    }
    get_corner(x, y, pos);
    my_putchar('\n');
}

void vertical(int x, int y)
{
    int body = y - 2;

    for (int i = 0; i < body; i ++) {
        my_putchar('B');
        if (x > 1) {
            print_spaces(x - 2);
            my_putchar('B');
        }
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        my_put_err();
    } else {
        horizontal(x, y, 0);
        vertical(x, y);
        if (y > 1)
            horizontal(x, y, 1);
    }
}

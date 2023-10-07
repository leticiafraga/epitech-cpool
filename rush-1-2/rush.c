/*
** EPITECH PROJECT, 2023
** rush-1-2
** File description:
** square with /, * and \
*/

void horizontal(int x)
{
    if (x <= 0)
        return 0;
    if (x == 1) {
        my_putchar('*');
    } else if (x > 1) {
        my_putchar('/');
    }
    for (int i = 1; i < x - 1; i++) {
        my_putchar('*');
    }
    if (x > 1)
        my_putchar(92);
    my_putchar('\n');
}

void vertical(int x)
{
    if (x <= 1) {
        return 0;
    } else if (x > 1) {
        my_putchar('*');
    }
    for (int i = 1; i < x - 1; i++) {
        my_putchar(' ');
    }
    if (x > 1) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void horizontal_rev(int x)
{
    if (x <= 1) {
        return 0;
    } else if (x > 1) {
        my_putchar(92);
    }
    for (int i = 1; i < x - 1; i++) {
        my_putchar('*');
    }
    if (x > 1)
        my_putchar('/');
    my_putchar('\n');
}

void rush(int x, int y)
{
    horizontal(x);
    for (int u = 1; u < y - 1; u++) {
        vertical(x);
    }
    horizontal_rev(x);
}

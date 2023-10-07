/*
** EPITECH PROJECT, 2023
** RUSH_GENERIC
** File description:
** Displays a rectangle with width x and height y
*/
struct square_parts {
    char corner_1;
    char corner_2;
    char corner_3;
    char corner_4;
    char body;
};

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

void horizontal(int x, int y, struct square_parts *square, int pos)
{
    if (x > 1) {
        get_corner(x, y, pos);
    }
    for (int i = 1; i < x - 1; i++) {
        my_putchar(square->body);
    }
    get_corner(x, y, pos);
    my_putchar('\n');
}

void vertical(int x, int y, char c)
{
    int body = y - 2;

    for (int i = 0; i < body; i ++) {
        my_putchar(c);
        if (x > 1) {
            print_spaces(x - 2);
            my_putchar(c);
        }
        my_putchar('\n');
    }
}

void rush_generic(int x, int y, struct square_parts *square)
{
    if (x <= 0 || y <= 0) {
        my_put_err();
    } else {
        horizontal(x, y, square, 0);
        vertical(x, y, square->body);
        if (y > 1)
            horizontal(x, y, square, 1);
    }
}

void print_spaces(int n)
{
    for (int i = 0; i < n; i++) {
        my_putchar(' ');
    }
}

void horizontal(int x, int y)
{
    if (x > 1)
        my_putchar('o');
    for (int i = 1; i < x - 1; i++) {
        my_putchar('-');
    }
    my_putchar('o');
    my_putchar('\n');
}

void vertical(int x, int y)
{
    int body = y - 2;
    for (int i = 0; i < body; i++) {
        my_putchar('|');
        if (x > 1) {
            print_spaces(x - 2);
            my_putchar('|');
        }
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x == 0 || y == 0)
        return;
    horizontal(x, y);
    vertical(x, y);
    if (y > 1)
        horizontal(x, y);
}

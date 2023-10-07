void horizontal(int x)
{
    if (x > 1)
        my_putchar('o');
    for (int i = 1; i < x - 1; i++) {
        my_putchar('-');
    }
    my_putchar('o');
    my_putchar('\n');
}

void rush(int x, int y)
{
    horizontal(x);
}

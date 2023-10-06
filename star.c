/*
** EPITECH PROJECT, 2023
** STAR
** File description:
** Function that displays a star, based on its given size.
*/
void print_spaces(int n)
{
    for (int i = 0; i < n; i++) {
        my_putchar(' ');
    }
}

void print_ast(int n)
{
    for (int i = 0; i < n; i++) {
        my_putchar('*');
    }
}

static void line1(unsigned int size)
{
    print_spaces(size * 2);
    print_spaces(size - 1);
    if (size == 1) {
        print_spaces(1);
    }
    my_putchar('*');
    my_putchar('\n');
}

static void top(unsigned int size)
{
    int spaces = (size * 3) - 2;

    for (int i = 1; i < size; i++) {
        print_spaces(spaces);
        my_putchar('*');
        print_spaces(i * 2 - 1);
        my_putchar('*');
        my_putchar('\n');
        spaces -= 1;
    }
}

static void bottom(unsigned int size)
{
    int spaces = size * 2;

    for (int i = size - 1; i > 0; i--) {
        print_spaces(spaces);
        my_putchar('*');
        print_spaces(i * 2 - 1);
        my_putchar('*');
        my_putchar('\n');
        spaces += 1;
    }
}

static void border(unsigned int size)
{
    print_ast(size * 2 + 1);
    print_spaces(size * 2 - 3);
    if (size == 1) {
        print_spaces(1);
    }
    print_ast(size * 2 + 1);
    my_putchar('\n');
}

static void upmid(unsigned int size)
{
    for (int i = 0; i < size - 1; i++) {
        print_spaces(i + 1);
        print_ast(1);
        print_spaces((size * 6) - 5 - (2 * i));
        print_ast(1);
        my_putchar('\n');
    }
}

static void mid(unsigned int size)
{
    int mid_spaces = (size * 2) + (size - 2) * 2 + 1;

    if (size == 1) {
        mid_spaces += 2;
    }
    print_spaces(size);
    print_ast(1);
    print_spaces(mid_spaces);
    print_ast(1);
    my_putchar('\n');
}

static void lomid(unsigned int size)
{
    for (int i = size - 2; i >= 0; i--) {
        print_spaces(i + 1);
        print_ast(1);
        print_spaces((size * 6) - 5 - (2 * i));
        print_ast(1);
        my_putchar('\n');
    }
}

void star (unsigned int size)
{
    if (size > 0) {
        line1(size);
        top(size);
        border(size);
        upmid(size);
        mid(size);
        lomid(size);
        border(size);
        bottom(size);
        line1(size);
    }
}

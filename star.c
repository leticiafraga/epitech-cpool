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


void line1(unsigned int size)
{
    print_spaces(size*2);
    print_spaces(size - 1);
    my_putchar('*');
    my_putchar('\n');
}

void top(unsigned int size)
{
    int spaces = (size * 3) - 2;

    for (int i = 1; i < size; i++) {
        print_spaces(spaces);
        my_putchar('*');
        print_spaces(i*2 - 1);
        my_putchar('*');    
        my_putchar('\n');
        spaces -= 1;
    }
}

void bottom(unsigned int size)
{
    int spaces = size * 2;

    for (int i = size - 1; i > 0; i--) {
        print_spaces(spaces);
        my_putchar('*');
        print_spaces(i*2 - 1);
	my_putchar('*');
	my_putchar('\n');
        spaces += 1;
    }
}

void border(unsigned int size)
{
    print_ast(size*2 + 1);
    print_spaces(size*2 - 3);
    print_ast(size*2 + 1);
    my_putchar('\n');
}

void upmid(unsigned int size)
{
    for (int i = 0; i < size; i++) {
        print_spaces(i + 1);
        print_ast(1);
        print_spaces((size * 6) - 5 - (2 * i));
        print_ast(1);
        my_putchar('\n');
    }
}

void lomid(unsigned int size)
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
    line1(size);
    top(size);
    border(size);
    upmid(size);
    lomid(size);
    border(size);
    bottom(size);
    line1(size);
}

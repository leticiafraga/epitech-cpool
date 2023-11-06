/*
** EPITECH PROJECT, 2023
** do-op
** File description:
** Program to execute operations
*/
#include "../include/my.h"
#include <unistd.h>

static int validate_op(char c)
{
    if (c == '-' || c == '+' || c == '/' || c == '*' || c == '%') {
        return 1;
    }
    return 0;
}

static int div(int n1, int n2)
{
    if (n2 == 0) {
        write(2, "Stop: division by zero", 23);
        return 84;
    } else
        my_put_nbr(n1 / n2);
    return 0;
}

static int mod(int n1, int n2)
{
    if (n2 == 0) {
        write(2, "Stop: modulo by zero", 21);
        return 84;
    } else
        my_put_nbr(n1 % n2);
    return 0;
}

static int execute(int n1, int n2, char opv)
{
    switch (opv) {
    case '-':
        my_put_nbr(n1 - n2);
        return 0;
    case '*':
        my_put_nbr(n1 * n2);
        return 0;
    case '+':
        my_put_nbr(n1 + n2);
        return 0;
    case '/':
        return div(n1, n2);
    case '%':
        return mod(n1, n2);
    default:
        my_putchar('0');
        return 84;
    }
}

int main(int ac, char **av)
{
    int n1;
    int n2;
    char *op;
    char opv;
    int len;

    if (ac != 4)
        return 84;
    n1 = my_getnbr(av[1]);
    n2 = my_getnbr(av[3]);
    op = av[2];
    len = my_strlen(op);
    for (int i = 0; i < len; i++) {
        if (validate_op(op[i]))
            opv = op[i];
    }
    return execute(n1, n2, opv);
}

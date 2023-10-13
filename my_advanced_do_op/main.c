/*
** EPITECH PROJECT, 2023
** do-op
** File description:
** Program to execute operations
*/
#include "../include/my.h"
#include "../include/my_opp.h"
#include "../include/operator.h"

static int validate_op(char c, int n1, int n2)
{
    int i = 0;

    while (OPERATORS_FUNCS[i].symbol[0] != '\0') {
        if (c == OPERATORS_FUNCS[i].symbol[0]) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main(int ac, char **av)
{
    int n1;
    int n2;
    char *op;
    int len;
    int found = 0;

    if (ac != 4)
        return 84;
    n1 = my_getnbr(av[1]);
    n2 = my_getnbr(av[3]);
    op = av[2];
    len = my_strlen(op);
    for (int i = 0; i < len; i++) {
        if (validate_op(op[i], n1, n2))
            return OPERATORS_FUNCS[i].exec(n1, n2);
    }
    write(2, "error: only ", 12);
    my_usage(n1, n2);
    write(2, " are supported", 14);
    return 0;
}

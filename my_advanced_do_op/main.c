/*
** EPITECH PROJECT, 2023
** do-op
** File description:
** Program to execute operations
*/
#include <unistd.h>
#include "../include/my.h"
#include "../include/operator.h"
#include "../include/my_opp.h"

static void put_err(char *str)
{
    int len = my_strlen(str);

    write(2, str, len);
}

static int validate_op(char c, int n1, int n2)
{
    int i = 0;

    while (OPERATORS_FUNCS[i].symbol[0] != '\0') {
        if (c == OPERATORS_FUNCS[i].symbol[0]) {
            return i;
        }
        i++;
    }
    return -1;
}

static void put_ops(void)
{
    put_err("error: only ");
    my_usage(0, 0);
    put_err(" are supported");
}

int main(int ac, char **av)
{
    int n1;
    int n2;
    char *op;
    int len;
    int found = -1;

    if (ac != 4)
        return 84;
    n1 = my_getnbr(av[1]);
    n2 = my_getnbr(av[3]);
    op = av[2];
    len = my_strlen(op);
    for (int i = 0; i < len; i++) {
        found = validate_op(op[i], n1, n2);
        if (found != -1)
            return OPERATORS_FUNCS[found].exec(n1, n2);
    }
    return 0;
}

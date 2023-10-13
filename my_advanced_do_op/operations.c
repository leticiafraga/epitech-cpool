/*
** EPITECH PROJECT, 2023
** Operations
** File description:
** Operations
*/

#include "../../include/my.h"

int my_div(int n1, int n2)
{
    if (n2 == 0)
        write(2, "Stop: division by zero", 23);
    else
        my_put_nbr(n1 / n2);
    return 0;
}

int my_mod(int n1, int n2)
{
    if (n2 == 0)
        write(2, "Stop: modulo by zero", 21);
    else
        my_put_nbr(n1 % n2);
    return 0;
}

int my_add(int n1, int n2)
{
    my_put_nbr(n1 + n2);
    return 0;
}

int my_sub(int n1, int n2)
{
    my_put_nbr(n1 - n2);
    return 0;
}

int my_mul(int n1, int n2)
{
    my_put_nbr(n1 * n2);
    return 0;
}

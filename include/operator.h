/*
** EPITECH PROJECT, 2023
** Operator
** File description:
** Struct for an operator
*/

#ifndef OPERATOR
    #define OPERATOR
int my_usage(int n1, int n2);
int my_div(int n1, int n2);
int my_mod(int n1, int n2);
int my_add(int n1, int n2);
int my_sub(int n1, int n2);
int my_mul(int n1, int n2);

struct operator {
    char *symbol;
    int (*exec) (int n1, int n2);
};

#endif

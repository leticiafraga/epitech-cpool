/*
** EPITECH PROJECT, 2023
** Operator Funcs
** File description:
** Operator Funcs
*/
#ifndef OP_FN
    #define OP_FN

const struct operator OPERATORS_FUNCS[] = {
    {"+", &my_add},
    {"-", &my_sub},
    {"/", &my_div},
    {"*", &my_mul},
    {"%", &my_mod},
    {"", &my_usage}
};

#endif

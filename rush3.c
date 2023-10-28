/*
** EPITECH PROJECT, 2023
** Stumper
** File description:
** Define what is the rush function called
*/

#include "include/my.h"

int rush3(char *buffer)
{
    char logo = buffer[0];

    switch (logo) {
    case 'o':
        func_rush1();
        break;
    case '/':
        func_rush2();
        break;
    case '*':
        func_rush3();
        break;
    case 'A':
        func_rush4();
        break;
    case 'B':
        func_rush5();
        break;
    default:
        my_putstr("none");
        return 0;
    }
}

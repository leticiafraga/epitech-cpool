/*
** EPITECH PROJECT, 2023
** Stumper
** File description:
** Define what is the rush function called
*/
#include <stdlib.h>
#include "include/my.h"
#include "include/struct.h"
#include "include/rush3.h"

int rush3(char *buffer)
{
    char logo = buffer[0];

    switch (logo) {
    case 'o':
        rectangle1(buffer);
        break;
    case '/':
    case '*':
        rectangle2(buffer);
        break;
    case 'A':
        other_recs(buffer);
        break;
    case 'B':
        other_recs_same(buffer);
        break;
    default:
        not_found("Error in the first character\n");
    }
    return 0;
}

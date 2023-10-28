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

static int square2(char *buffer)
{
    int width = 0;
    int height = 0;

    width = check_first_line(buffer, '*', '\\');
    if (width < 0)
        return width;
    height = check_vertical(buffer, width, '|');
    if (height < 0)
        return -1;
    my_putstr("[rush1-2] ");
    put_dimensions(width, height);
    return 0;
}

static int other_squares(char *buffer)
{
}

int rush3(char *buffer)
{
    char logo = buffer[0];

    switch (logo) {
    case 'o':
        rectangle1(buffer);
        break;
    case '/':
    case '*':
        square2(buffer);
        break;
    case 'A':
        other_squares(buffer);
        break;
    case 'B':
        other_squares(buffer);
        break;
    default:
        my_putstr("none\n");
    }
    return 0;
}

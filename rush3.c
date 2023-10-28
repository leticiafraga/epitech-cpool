/*
** EPITECH PROJECT, 2023
** Stumper
** File description:
** Define what is the rush function called
*/

#include "include/my.h"

static int check_first_line(char *buffer, char hori_logo)
{
    int i = 1;
    char corner = buffer[0];
    
    while (buffer[i] == hori_logo)
        i ++;
    if (buffer[i + 1] != corner || buffer[i + 2] != '\n')
        return -1;
    return i + 1;
}

static int check_vertical(char *buffer)
{

}

static int square1(char *buffer)
{
    check_first_line(buffer);
    check_vertical(buffer);
}

int rush3(char *buffer)
{
    char logo = buffer[0];

    switch (logo) {
    case 'o':
        square1(buffer);
        break;
    case '/':
        //func_rush2();
        break;
    case '*':
        //func_rush3();
        break;
    case 'A':
        //func_rush4();
        break;
    case 'B':
        //func_rush5();
        break;
    default:
        my_putstr("none");
        return 0;
    }
}

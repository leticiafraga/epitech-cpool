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
    return i + 2;
}

static int check_vertical(char *buffer, int width)
{
    char *it = buffer;
    int lines = 0;
    char *line = 0;
    

    while (*it != '\0') {
        if (*it == '\n')
            lines++;
        it++;
    }
    for (int i = 1; i < lines - 1; i++) {
        line = &buffer[(width + 1) * i];

        if (line[0] != '|' || line[width - 1] != '|')
            return -1;
        for (int j = 1; j < width - 1; j ++) {
            if (line[j] != ' ')
                return -1;
        }
    }
    return lines;
}

static int square1(char *buffer)
{
    int width = 0;
    int height = 0;

    width = check_first_line(buffer, '-');
    if (width < 0)
        return -1;
    height = check_vertical(buffer, width);
    if (height < 0)
        return -1;
    my_put_nbr(width);
    my_putchar(' ');
    my_put_nbr(height);
    my_putchar('\n');
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

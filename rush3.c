/*
** EPITECH PROJECT, 2023
** Stumper
** File description:
** Define what is the rush function called
*/
#include <stdlib.h>
#include "include/my.h"
#include "include/struct.h"

static int check_first_line(char *buffer, char hori_logo, char r_corner)
{
    int i = 0;

    if (buffer[i + 1] == hori_logo || buffer[i + 1] == r_corner)
        i = 1;
    while (buffer[i] == hori_logo)
        i++;
    if (buffer[i] != r_corner || buffer[i + 1] != '\n')
        return -1;
    return i + 1;
}

static int check_last_line(char *buffer, rectangle *rec)
{
    int i = 0;
    
    if (buffer[i] != rec->bl_corner)
        return -1;
    if (buffer[i + 1] == rec->h_body || buffer[i + 1] == rec->br_corner)
        i = 1;
    while (buffer[i] == rec->h_body)
        i++;
    if (buffer[i] != rec->br_corner || buffer[i + 1] != '\n')
        return -1;
    return i + 1;
}

static int it_line(int width, char *line)
{
    for (int j = 1; j < width - 1; j++) {
        if (line[j] != ' ')
            return -1;
    }
    return 1;
}

static int check_vertical(char *buffer, int width, char body)
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
        if (line[0] != body || line[width - 1] != body)
            return -1;
        if (it_line(width, line) == -1)
            return -1;
    }
    return lines;
}

static void put_dimensions(int w, int h)
{
    my_put_nbr(w);
    my_putchar(' ');
    my_put_nbr(h);
    my_putchar('\n');
}

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
    my_putstr("[rush 1-2] ");
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
        my_putstr("none");
    }
    return 0;
}

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

static int body_line(char *buffer, char hori_logo)
{
    int i = 0;

    while (buffer[i] == hori_logo)
        i++;
    if (buffer[i] != '\n')
        return -1;
    return i + 1;
}
    
int check_first_line(char *buffer, char hori_logo, char r_corner, int is_it_square1)
{
    int i = 0;

    if (buffer[i] == hori_logo && is_it_sqare1 != 1)
        return check_body_line(buffer, hori_logo);
    if (buffer[i + 1] == hori_logo || buffer[i + 1] == r_corner)
        i = 1;
    while (buffer[i] == hori_logo)
        i++;
    if (buffer[i] != r_corner || buffer[i + 1] != '\n')
        return -1;
    return i + 1;
}

int check_last_line(char *buffer, rectangle *rec, int w_size)
{
    int i = 0;

    if (buffer[i] != rec->bl_corner)
        return -1;
    if (buffer[i + 1] == rec->h_body || buffer[i + 1] == rec->br_corner)
        i = 1;
    while (buffer[i] == rec->h_body)
        i++;
    if ((buffer[i] != rec->br_corner || buffer[i + 1] != '\n')
        return -1;
    if (w_size != i + 1)
        return -1;
    return 0;
}

static int it_line(int width, char *line)
{
    for (int j = 1; j < width - 1; j++) {
        if (line[j] != ' ')
            return -1;
    }
    return 1;
}

int check_vertical(char *buffer, int width, char body)
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

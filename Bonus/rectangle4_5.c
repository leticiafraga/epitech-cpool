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

static rectangle *init_rec(void)
{
    rectangle *rec = malloc(sizeof(rectangle));

    rec->tl_corner = 'A';
    rec->tr_corner = 'C';
    rec->h_body = 'B';
    rec->v_body = 'B';
    return rec;
}

int check_4(char *buffer, rectangle *rec, int width, int height)
{
    rec->bl_corner = 'A';
    rec->br_corner = 'C';
    if (check_last_line(buffer, rec, width, 0) < 0)
        return not_found("Error in the last line\n");
    my_putstr("[rush1-4] ");
    put_dimensions(width, height);
    return 0;
}

int check_5(char *buffer, rectangle *rec, int width, int height)
{
    rec->bl_corner = 'C';
    rec->br_corner = 'A';
    if (check_last_line(buffer, rec, width, 0) < 0)
        return not_found("Error in the last line\n");
    my_putstr("[rush1-5] ");
    put_dimensions(width, height);
    return 0;
}

int rectangle4_5(char *buffer)
{
    int width = 0;
    int height = 0;
    rectangle *rec;

    rec = init_rec();
    width = check_first_line(buffer, rec->h_body, rec->tr_corner, 0);
    if (width < 0)
        return not_found("Error in the first line\n");
    height = check_vertical(buffer, width, rec->v_body);
    if (height < 0)
        return not_found("Error in the vertical lines\n");
    buffer += (width + 1) * (height - 1);
    if (buffer[0] == 'A')
        return check_4(buffer, rec, width, height);
    else if (buffer[0] == 'C')
        return check_5(buffer, rec, width, height);
    return not_found("Error in the last line\n");
}

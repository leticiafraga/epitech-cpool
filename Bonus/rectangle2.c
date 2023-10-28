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

static rectangle *init_rec_2(void)
{
    rectangle *rec = malloc(sizeof(rectangle));

    rec->tl_corner = '/';
    rec->tr_corner = '\\';
    rec->bl_corner = '\\';
    rec->br_corner = '/';
    rec->h_body = '*';
    rec->v_body = '*';
    return rec;
}

int rectangle2(char *buffer)
{
    int width = 0;
    int height = 0;
    rectangle *rec;

    rec = init_rec_2();
    width = check_first_line(buffer, '*', '\\', 0);
    if (width < 0)
        return not_found("Error in the first line\n");
    height = check_vertical(buffer, width, '*');
    if (height < 0)
        return not_found("Error in the vertical lines\n");
    buffer += (width + 1) * (height - 1);
    if (check_last_line(buffer, rec, width, 0) < 0)
        return not_found("Error in the last line\n");
    my_putstr("[rush1-2] ");
    put_dimensions(width, height);
    return 0;
}

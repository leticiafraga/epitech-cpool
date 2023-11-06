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

static rectangle *init_rec_3(void)
{
    rectangle *rec = malloc(sizeof(rectangle));

    rec->tl_corner = 'A';
    rec->tr_corner = 'A';
    rec->bl_corner = 'C';
    rec->br_corner = 'C';
    rec->h_body = 'B';
    rec->v_body = 'B';
    return rec;
}

int rectangle3(char *buffer)
{
    int width = 0;
    int height = 0;
    rectangle *rec;

    rec = init_rec_3();
    width = check_first_line(buffer, rec->h_body, rec->tr_corner, 0);
    if (width < 0)
        return not_found();
    height = check_vertical(buffer, width, rec->v_body);
    if (height < 0)
        return not_found();
    buffer += (width + 1) * (height - 1);
    if (check_last_line(buffer, rec, width, 0) < 0)
        return not_found();
    my_putstr("[rush1-3] ");
    put_dimensions(width, height);
    return 0;
}

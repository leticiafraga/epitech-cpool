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

static void put_dim(int w, int h)
{
    my_put_nbr(w);
    my_putchar(' ');
    my_put_nbr(h);
}

static void put_msg(int w, int h)
{
    my_putstr("[rush1-3] ");
    put_dim(w, h);
    my_putstr(" || [rush1-4] ");
    put_dim(w, h);
    my_putstr(" || [rush1-5] ");
    put_dim(w, h);
    my_putchar('\n');
}

static rectangle *init_rec(void)
{
    rectangle *rec = malloc(sizeof(rectangle));

    rec->tl_corner = '/';
    rec->tr_corner = '\\';
    rec->bl_corner = '\\';
    rec->br_corner = '/';
    rec->h_body = 'B';
    rec->v_body = 'B';
    return rec;
}

int other_recs_same(char *buffer)
{
    int width = 0;
    int height = 0;
    rectangle *rec;

    rec = init_rec();
    width = check_first_line(buffer, 'B', '\\', 0);
    if (width < 0)
        return not_found();
    height = check_vertical(buffer, width, 'B');
    if (height < 0)
        return not_found();
    buffer += (width + 1) * (height - 1);
    if (check_last_line(buffer, rec, width, 0) < 0)
        return not_found();
    put_msg(width, height);
    return 0;
}

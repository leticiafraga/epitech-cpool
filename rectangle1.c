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

void put_dimensions(int w, int h)
{
    my_put_nbr(w);
    my_putchar(' ');
    my_put_nbr(h);
    my_putchar('\n');
}

int not_found(void)
{
    my_putstr("none\n");
    return -1;
}

static rectangle *init_rec_1(void)
{
    rectangle *rec = malloc(sizeof(rectangle));

    rec->tl_corner = 'o';
    rec->tr_corner = 'o';
    rec->bl_corner = 'o';
    rec->br_corner = 'o';
    rec->h_body = '-';
    rec->v_body = '|';
    return rec;
}

int rectangle1(char *buffer)
{
    int width = 0;
    int height = 0;
    rectangle *rec;

    rec = init_rec_1();
    width = check_first_line(buffer, rec->h_body, rec->tr_corner);
    if (width < 0)
        return not_found();
    height = check_vertical(buffer, width, rec->v_body);
    if (height < 0)
        return -1;
    buffer += (width + 1) * (height - 1);
    if (check_last_line(buffer, rec, width) < 0)
      return -1;
    my_putstr("[rush-1-1] ");
    put_dimensions(width, height);
}

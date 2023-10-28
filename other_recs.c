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

static int put_all(int w, int h)
{
    my_putstr("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
    return 0;
}

static rectangle *init_rec(void)
{
    rectangle *rec = malloc(sizeof(rectangle));

    rec->tl_corner = 'A';
    rec->h_body = 'B';
    rec->v_body = 'B';
    return rec;
}

static int validate_tr_corner(char *buffer)
{
    int i = 0;

    while (buffer[i + 1] != '\n' && buffer[i + 1] != '\0')
        i++;
    return buffer[i];
}

int other_recs(char *buffer)
{
    int width = 0;
    int height = 0;
    rectangle *rec = init_rec();

    rec->tr_corner = validate_tr_corner(buffer);
    if (rec->tr_corner == 'B')
        return put_all(1, 1);
    if (rec->tr_corner < 'A' || rec->tr_corner > 'C')
        return not_found();
    width = check_first_line(buffer, rec->h_body, rec->tr_corner, 0);
    if (width < 0)
        return not_found();
    height = check_vertical(buffer, width, rec->v_body);
    if (height < 0)
        return not_found();
}

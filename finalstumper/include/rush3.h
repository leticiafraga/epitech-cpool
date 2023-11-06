/*
** EPITECH PROJECT, 2023
** Stumper
** File description:
** header for stumper
*/

#include "struct.h"

#ifndef RUSH3_H
    #define RUSH3_H

int rush3(char *buffer);
int check_first_line(char *buffer, char hori_logo, char r_corner,
    int is_is_square1);
int check_last_line(char *buffer, rectangle *rec, int w_size,
    int is_it_square1);
int check_vertical(char *buffer, int width, char body);
void put_dimensions(int w, int h);
rectangle *init_rec_1(void);
int rectangle1(char *buffer);
int rectangle2(char *buffer);
int rectangle3(char *buffer);
int rectangle4_5(char *buffer);
int other_recs(char *buffer);
int other_recs_same(char *buffer);
int not_found(void);
#endif

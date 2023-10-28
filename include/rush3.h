/*
** EPITECH PROJECT, 2023
** Stumper
** File description:
** header for stumper
*/

#include "struct.h"

#ifndef RUSH3_H
    #define RUSH3_H
const int BUFF_SIZE = 30000;

int rush3(char *buffer);
int check_first_line(char *buffer, char hori_logo, char r_corner);
int check_last_line(char *buffer, rectangle *rec);
int check_vertical(char *buffer, int width, char body);
void put_dimensions(int w, int h);
rectangle *init_rec_1(void);
int rectangle1(char *buffer);
#endif

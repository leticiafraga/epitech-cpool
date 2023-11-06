/*
** EPITECH PROJECT, 2023
** MY_STRDUP
** File description:
** Function that allocates memory and copies the string given as argument in it
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int len;
    char *str;

    len = my_strlen(src);
    str = malloc(sizeof(char) * (len + 1));
    return my_strcpy(str, src);
}

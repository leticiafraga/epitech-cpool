/*
** EPITECH PROJECT, 2023
** convert_base
** File description:
** Function that converts and returns a number (provided as a
** string) in a given base into another base
*/
#include <stdlib.h>

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int dec = my_getnbr_base(nbr, base_from);
    char *res;

    res = my_getint_base(dec, base_to);
    return res;
}

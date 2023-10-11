/*
** EPITECH PROJECT, 2023
** MY_GETNBR_BASE
** File description:
** Function that converts and returns a number (provided as a
** string) in a given base into a decimal number
*/
#include <stdlib.h>

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int dec = my_getnbr_base(nbr, base_from);
    char *res;
    int size;

    size = my_getint_base_size(res, dec, base_to);
    res = malloc(sizeof(char) * (size + 1));
    my_getint_base(res, dec, base_to);
    return res;
}

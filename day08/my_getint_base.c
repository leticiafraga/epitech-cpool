/*
** EPITECH PROJECT, 2023
** MY_GETINT_BASE
** File description:
** Function that converts and returns a decimal number
** into a number in a given base.
*/
#include <stdlib.h>

int my_getint_base_size(int nbr, char const *base)
{
    int len = my_strlen(base);
    int i = 0;

    if (nbr < 0) {
        i += 1;
        nbr *= -1;
    }
    while (nbr != 0) {
        nbr = nbr / len;
        i++;
    }
    return i;
}

char *my_getint_base(int nbr, char const *base)
{
    int len = my_strlen(base);
    int dig;
    int i = 0;
    char neg = 0;
    int size = my_getint_base_size(nbr, base);
    char *dest = malloc(sizeof(char) * (size + 1));

    if (nbr < 0) {
        nbr *= -1;
        neg = 1;
    }
    while (nbr != 0) {
        dig = nbr % len;
        nbr = nbr / len;
        dest[i++] = base[dig];
    }
    if (neg)
        dest[i++] = '-';
    dest[i] = '\0';
    return my_revstr(dest);
}

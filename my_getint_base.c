/*
** EPITECH PROJECT, 2023
** MY_GETINT_BASE
** File description:
** Function that converts and returns a decimal number
** into a number in a given base.
*/
int my_getint_base_size(char *dest, int nbr, char const *base)
{
    int len = my_strlen(base);
    int dig;
    int i = 0;

    if (nbr < 0) {
        i += 1;
    }
    while (nbr != 0) {
        dig = nbr % len;
        nbr = nbr / len;
        i++;
    }
    return i;
}

char *my_getint_base(char *dest, int nbr, char const *base)
{
    int len = my_strlen(base);
    int dig;
    int i = 0;
    char neg = '-';

    if (nbr < 0) {
        write(1, &neg, 1);
        nbr *= -1;
    }
    while (nbr != 0) {
        dig = nbr % len;
        nbr = nbr / len;
        dest[i] = base[dig];
        i++;
    }
    dest[i] = '\0';
    my_revstr(dest);
    return dest;
}

/*
** EPITECH PROJECT, 2023
** MY_GETNBR_BASE
** File description:
** Function that converts and returns a number (provided as a
** string) in a given base into a decimal number
*/
#include <stdlib.h>

static int findpos(char c, char const *base)
{
    int	i = 0;

    while (base[i] != '\0') {
        if (base[i] == c)
            return i;
        i++;
    }
    return -1;
}

static int validate(char c, char *nbr, int *len, char const *base)
{
    int pos = findpos(c, base);

    if (pos != -1) {
        nbr[*len] = c;
        *len += 1;
        return 1;
    }
    return 0;
}

static int transform(char *nbr, int len, int neg, char const *base)
{
    long int result = 0;
    int baselen = my_strlen(base);
    int pos;

    nbr[len] = '\0';
    for (int i = 0; i < len; i++) {
        pos = findpos(nbr[i], base);
        result = result * baselen;
        result += pos;
    }
    if (neg == -1) {
        result = result * -1;
    }
    return result;
}

static int set_found(int valid, int found)
{
    if (valid == 1) {
        if (found == 0)
            return 1;
        return 2;
    } else if ((found == 1 || found == 2) && valid == 0) {
        return 3;
    }
    return 0;
}

static int set_neg(char const *str, int i, int found)
{
    int neg = 1;

    for (int j = i - 1; j >= 0; j --) {
        if (str[j] == '-') {
            neg *= -1;
        }
        if ((str[j] != '+') && (str[j] != '-')) {
            break;
        }
    }
    return neg;
}

int my_getnbr_base(char const *str, char const *base)
{
    char c;
    int i = 0;
    int len = 0;
    int neg = 1;
    int found = 0;
    char nbr[30];
    int valid;

    if (str[0] == '\0')
        return 0;
    c = str[i];
    do {
        valid = validate(c, nbr, &len, base);
        found = set_found(valid, found);
        if (found == 1)
            neg = set_neg(str, i, found);
        i ++;
        c = str[i];
    } while (c != '\0');
    return transform(nbr, len, neg, base);
}

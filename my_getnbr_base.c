/*
** EPITECH PROJECT, 2023
** MY_GETNBR_BASE
** File description:
** Function that converts and returns a number (provided as a
** string) in a given base into a decimal number.
*/

static int transform(char const *nbr, char const *base)
{
    long int result = 0;
    int baselen = my_strlen(base);
    int len = my_strlen(nbr);

    for (int i = 0; i < len; i++) {
        result = result * baselen;
        result += (nbr[i] - '0');
        if (result > 2147483647) {
            return 0;
        }
    }
    return result;
}

int my_getnbr_base(char const *str, char const *base)
{
    int len = my_strlen(base);
    int res;
    int i = 0;
    int neg = 0;

    if (str[0] == '-') {
        neg = 1;
        res = transform(&str[1], base);
    } else
        res = transform(str, base);
    if (neg == 1)
        res = res * -1;
    return res;
}

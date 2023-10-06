/*
** EPITECH PROJECT, 2023
** MY_GETNBR
** File description:
** Returns a number, sent to the function as a string
*/
int validate(char c, char *nbr, int *len)
{
    if (c >= '0' && c <= '9') {
        nbr[*len] = c;
        *len += 1;
        return 1;
    }
    return 0;
}

int transform(char *nbr, int len, int neg)
{
    long int result = 0;

    if (neg == 1) {
        my_putchar('-');
    }
    for (int i = 0; i < len; i++) {
        result = result * 10;
        result += (nbr[i] - '0');
    }
    if (result > 2147483647 || result < -2147483647) {
        return 0;
    }
    return result;
}

int getdigits(char const *str, char *nbr, int i)
{
    char c;
    int len = 0;
    int neg = 0;
    int found = 0;

    do {
        c = str[i];
        if (found == 0 && c == '-') {
            neg = 1;
        }
        if (validate(c, nbr, &len)) {
            found = 1;
        }
        i ++;
    } while (c != '\0');
    nbr[len] = '\0';
    return transform(nbr, len, neg);
}

int my_getnbr(char const *str)
{
    int i = 0;
    char c;
    int result = 0;
    char nbr[10];

    result = getdigits(str, nbr, i);
    return result;
}

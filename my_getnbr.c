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

    nbr[len] = '\0';
    if (neg == 1) {
        my_putchar('-');
    }
    for (int i = 0; i < len; i++) {
        result = result * 10;
        result += (nbr[i] - '0');
        if (result > 2147483647 || result < -2147483647) {
            return 0;
        }
    }
    return result;
}

int set_found(int valid, int found, int *neg)
{
    if (valid == 1) {
        if (found == 0) {
            return 1;
        }
        return 2;
    } else if ((found == 1 || found == 2) && valid == 0) {
        return 3;
    }
    return 0;
}

int getdigits(char const *str)
{
    char c;
    char nbr[20];
    int i = 0;
    int len = 0;
    int neg = 0;
    int found = 0;
    int valid;

    do {
        c = str[i];
        valid = validate(c, nbr, &len);
        found = set_found(valid, found, &neg);
        if (found == 0 && i > 0 && str[i - 1] == '-') {
            neg = 1;
        }
        i ++;
    } while (c != '\0' && found != 3);
    return transform(nbr, len, neg);
}

int my_getnbr(char const *str)
{
    return getdigits(str);
}

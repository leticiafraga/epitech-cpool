/*
** EPITECH PROJECT, 2023
** MY_GETNBR
** File description:
** Returns a number, sent to the function as a string
*/
static int validate(char c, char *nbr, int *len)
{
    if (c >= '0' && c <= '9') {
        nbr[*len] = c;
        *len += 1;
        return 1;
    }
    return 0;
}

static int transform(char *nbr, int len, int neg)
{
    long int result = 0;

    nbr[len] = '\0';
    if (neg == -1) {
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

static int set_found(int valid, int found)
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

static int set_neg(char const *str, int i, int found, int cur)
{
    for (int j = i - 1; j >= 0; j --) {
        if (str[j] == '-') {
            cur *= -1;
        }
    }
    return cur;
}

int my_getnbr(char const *str)
{
    char c;
    char nbr[20];
    int i = 0;
    int len = 0;
    int neg = 1;
    int found = 0;
    int valid;

    do {
        c = str[i];
        valid = validate(c, nbr, &len);
        found = set_found(valid, found);
        if (found == 1){
            neg = set_neg(str, i, found, neg);
        }
        i ++;
    } while (c != '\0' && found != 3);
    return transform(nbr, len, neg);
}

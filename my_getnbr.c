/*
** EPITECH PROJECT, 2023
** MY_GETNBR
** File description:
** Returns a number, sent to the function as a string
*/
int getdigits(char const *str, char *nbr) {
    int i = 0;
    char c;
    int len = 0;
    int neg = 0;

    do {
        c = str[i];
        if (c >= '0' && c <= '9'|| (c == '-' && neg == 0)) {
            nbr[len] = c;
            len += 1;
            if (c == '-') {
		neg = 1;
            }
	}
        i ++;
    } while (c != '\0');
    nbr[len] = '\0';
    return len;
}

int my_getnbr(char const *str)
{
    int i = 0;
    char c;
    int len = 0;
    char nbr[10];
    long int result = 0;
    int neg = 0;

    len = getdigits(str, nbr);  
    for (i = 0; i < len; i++) {
        result = result * 10;
        result += (nbr[i] - '0');
    }
    if (result > 2147483647 || result < -2147483647) {
        return 0;
    }
    return result;
}

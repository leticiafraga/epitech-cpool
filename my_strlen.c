/*
** EPITECH PROJECT, 2023
** MY_STRLEN
** File description:
** Function that counts and returns the number of characters found
** in the string passed as parameter.
*/

long int get_next(long int nb)
{
    long int next = nb % 10;

    nb = nb / 10;
    if (nb != 0) {
        get_next(nb);
    }
    my_putchar(next + '0');
    return 0;
}

int my_put_nbr(int nb)
{
    long int lg = nb;

    if (lg < 0) {
        my_putchar('-');
        lg = lg * -1;
    }
    get_next(lg);
    return 0;
}

int my_strlen(char const *str)
{
    int i = 0;
    char c;

    do {
        c = str[i];
        if (c != '\0') {
            i++;
        }
    } while (c != '\0');
    my_put_nbr(i);
    return 0;
}

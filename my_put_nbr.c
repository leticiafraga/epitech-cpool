/*
** EPITECH PROJECT, 2023
** MY_PUT_NBR
** File description:
** Function that displays the number given as a parameter
*/
int get_next(int nb)
{
    int next = nb % 10;

    nb = nb / 10;
    if (nb != 0) {
        get_next(nb);
    }
    my_putchar(next + '0');
    return 0;
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    get_next(nb);
    return 0;
}

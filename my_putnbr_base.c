/*
** EPITECH PROJECT, 2023
** MY_PUTNBR_BASE
** File description:
** Function that converts and displays a decimal number
** into a number in a given base.
*/

int my_putnbr_base(int nbr, char const *base)
{
    int len = my_strlen(base);
    int dig;
    char res[40];
    int i = 0;
    char neg = '-';

    if (nbr < 0) {
        write(1, &neg, 1);
        nbr *= -1;
    }
    while (nbr != 0) {
        dig = nbr % len;
        nbr = nbr / len;
        res[i] = base[dig];
        i++;
    }
    i--;
    while (i >= 0)
        my_putchar(res[i--]);
    return 0;
}

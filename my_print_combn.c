/*
** EPITECH PROJECT, 2023
** MY_PRINT_COMBN
** File description:
** Function that displays, in ascending order, all the numbers
** composed by $n$ different digits numbers. Given $n$ digits
** (all different), only the smallest number composed by
** thoses digits must be displayed.
*/
void print_digits(int s, int nbr, int maxfirst)
{
    if (nbr < s) {
        my_putchar('0');
    }
    my_put_nbr(nbr);
    if (nbr / s < maxfirst) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int check_should_print(int n)
{
    int digit = n % 10;
    int curr;

    while (n != 0) {
        n = n / 10;
        curr = n % 10;
        if (curr >= digit || check_should_print(n) == 0) {
            return 0;
        }
    }
    return 1;
}

int my_print_combn(int n)
{
    int s = 1;
    int max = 1;
    int maxfirst = 10 - n;

    if (n == 0) {
        my_putchar('0');
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        s = s * 10;
    }
    max = s * 10 - 1;
    for (int i = s / 10; i < max; i++){
        if (check_should_print(i) == 1){
            print_digits(s, i, maxfirst);
        }
    }
    return 0;
}

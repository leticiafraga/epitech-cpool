/*
** EPITECH PROJECT, 2023
** MY_PRINT_APLHA
** File description:
** Function that, beginning with a, displays the lowercase alphabet
** in ascending order, on a single line
*/
int my_print_alpha(void)
{
    int i;

    for (i = 97; i <= 122; i++) {
        my_putchar(i);
    }
}

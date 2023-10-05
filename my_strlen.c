/*
** EPITECH PROJECT, 2023
** MY_STRLEN
** File description:
** Function that counts and returns the number of characters found
** in the string passed as parameter.
*/
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
    my_putchar(i + '0');
    return 0;
}

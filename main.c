/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** Task01. By Leticia & Magnus
*/

#include "include/my.h"

int count_letters(char *str, char letter)
{
    int i;
    int cnt;

    my_strupcase(str);
    if (is_lowcase(letter) == 1) {
        letter -= 32;
    }
    cnt = 0;
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == letter) {
            cnt++;
        }
        i++;
    }
    return (cnt);
}

int main(int argc, char **argv)
{
    int cnt;

    if (argc < 3 || is_letter(argv[2][0] == 0)) {
        return (84);
    }
    cnt = count_letters(argv[1], argv[2][0]);
    my_putchar(argv[2][0]);
    my_putchar(':');
    my_put_nbr(cnt);
    my_putchar('\n');
    return (0);
}

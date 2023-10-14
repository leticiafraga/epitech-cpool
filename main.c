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

void put_info(char c, int cnt, int percent)
{
    int module;

    my_putchar(c);
    my_putchar(':');
    my_put_nbr(cnt);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(percent / 100);
    my_putchar('.');
    module = percent % 100;
    if (module < 10) {
        my_putchar('0');
    }
    my_put_nbr(module);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

int cal_freq(int str_len, int cnt)
{
    int percent;

    percent = (((cnt * 10000) / str_len));
    return (percent);
}

int cal_str_len(char *str)
{
    int i;
    int cnt;

    i = 0;
    cnt = 0;
    while (str[i] != '\0') {
        if (is_letter(str[i]) == 1) {
            cnt++;
        }
        i++;
    }
    return (cnt);
}

int main(int argc, char **argv)
{
    int cnt;
    int str_len;
    int percent;

    if (argc < 3) {
        return (84);
    }
    str_len = cal_str_len(argv[1]);
    my_strupcase(argv[1]);
    for (int i = 2; i < argc; i++) {
        if (is_letter(argv[2][0] == 0)) {
            return (84);
        }
        cnt = count_letters(argv[1], argv[i][0]);
        percent = cal_freq(str_len, cnt);
        put_info(argv[i][0], cnt, percent);
    }
    return (0);
}

/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** Task01. By Leticia & Magnus
*/

#include "include/my.h"
#include "include/languages.h"

static int count_letters(char *str, char letter)
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

static void put_info(char c, int cnt, int percent)
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

static int cal_freq(int str_len, int cnt)
{
    int percent;

    percent = (((cnt * 10000) / str_len));
    return (percent);
}

static int cal_str_len(char *str)
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

int *get_arr(int lang)
{
    int *arr;

    switch (lang) {
    case 0:
        arr = ENGLISH;
        break;
    case 1:
        arr = FRENCH;
        break;
    case 2:
        arr = GERMAN;
        break;
    default:
        arr = SPANISH;
        break;
    }
    return arr;
}

static int get_lang_score(char *str, int str_len, int lang)
{
    int percent;
    int *arr;
    int score = 0;
    int sum = 0;
    int cnt = 0;
    int pos = 0;

    arr = get_arr(lang);
    for (int i = 'a'; i <= 'z'; i++) {
        cnt = count_letters(str, i);
        percent = cal_freq(str_len, cnt);
        percent = percent * 10;
        score = percent - arr[pos];
        if (score < 0)
            score = score * (-1);
        sum += score;
        pos++;
    }
    return sum;
}

static void print_lang(int sm)
{
    switch (sm) {
    case 0:
        my_putstr("English");
        break;
    case 1:
        my_putstr("French");
        break;
    case 2:
        my_putstr("German");
        break;
    default:
        my_putstr("Spanish");
        break;
    }
}

static void put_lang(int *scores)
{
    int sm = 0;

    for (int i = 1; i < 4; i++) {
        if (scores[i] < scores[sm]) {
            sm = i;
        }
    }
    my_putstr("=> ");
    print_lang(sm);
}

int iterate_str(int argc, char **argv, int str_len)
{
    int cnt;
    int percent;

    for (int i = 2; i < argc; i++) {
        if (is_letter(argv[i][0] == 0)) {
            return (84);
        }
        cnt = count_letters(argv[1], argv[i][0]);
        percent = cal_freq(str_len, cnt);
        put_info(argv[i][0], cnt, percent);
    }
    return (0);
}

int main(int argc, char **argv)
{
    int str_len;
    int scores[4];

    if (argc < 3) {
        return (84);
    }
    str_len = cal_str_len(argv[1]);
    my_strupcase(argv[1]);
    if (iterate_str(argc, argv, str_len) == 84) {
        return (84);
    }
    for (int i = 0; i < 4; i++) {
        scores[i] = get_lang_score(argv[1], str_len, i);
    }
    put_lang(scores);
    return (0);
}

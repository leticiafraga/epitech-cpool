/*
** EPITECH PROJECT, 2023
** MY_ADVANCED_SORT_WORD_ARRAY
** File description:
** Sort words in an array
*/

#include "include/my.h"

static int compare(char **tab, int i, int (*cmp)(char const *, char const *))
{
    int sm = i;
    int j = i + 1;
    char *tmp;

    while (tab[j] != 0) {
        if (cmp(tab[sm], tab[j]) > 0)
            sm = j;
        j++;
    }
    if (sm != i) {
        tmp = tab[i];
        tab[i] = tab[sm];
        tab[sm] = tmp;
    }
    return 0;
}

int my_advanced_sort_word_array(char **tab,
    int (*cmp)(char const *, char const *))
{
    int i = 0;

    while (tab[i] != 0) {
        compare(tab, i, cmp);
        i++;
    }
    return 0;
}

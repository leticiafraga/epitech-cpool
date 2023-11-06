/*
** EPITECH PROJECT, 2023
** MY_SORT_WORD_ARRAY
** File description:
** Sort words in an array
*/

#include "include/my.h"

static int find_sm(char **tab, int i)
{
    int sm = i;
    int j = i + 1;
    char *tmp;

    while (tab[j] != 0) {
        if (my_strcmp(tab[sm], tab[j]) > 0)
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

int my_sort_word_array(char **tab)
{
    int i = 0;

    while (tab[i] != 0) {
        find_sm(tab, i);
        i++;
    }
    return 0;
}

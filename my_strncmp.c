/*
** EPITECH PROJECT, 2023
** MY_STRNCMP
** File description:
** Reproduce the behavior of the strncmp function.
*/
static int compare_pos(char const *s1, char const *s2, int i)
{
    if (s1[i] > s2[i]) {
        return 1;
    }
    if (s1[i] < s2[i]) {
        return -1;
    }
    return 0;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int compare;

    compare = compare_pos(s1, s2, 0);
    if (compare != 0)
        return compare;
    return 0;
}

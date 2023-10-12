/*
** EPITECH PROJECT, 2023
** my_params_to_array.c
** File description:
** Function that stores the program’s parameters into
** an array of structures and returns it
*/
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *arr = malloc(sizeof(struct info_param) * ac);
    int len;

    for (int i = 0; i < ac; i++) {
        len = my_strlen(av[i]);
        arr[i].length = len;
        arr[i].str = av[i];
        arr[i].copy = malloc(sizeof(char) * (len + 1));
        arr[i].copy = my_strcpy(arr[i].copy, av[i]);
        arr[i].word_array = my_str_to_word_array(av[i]);
    }
    return arr;
}

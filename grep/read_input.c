/*
** EPITECH PROJECT, 2023
** CAT
** File description:
** Clone cat
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"

static void find(char *param, char *arr, int size)
{
    if (my_strstr(arr, param)) {
        my_putstr(arr);
    }
}

void read_input(char *param)
{
    int arrsize = 30000;
    char arr[arrsize + 1];
    int size = 0;

    size = read(0, arr, arrsize);
    while (size) {
        arr[size] = '\0';
        find(param, arr, size);
        size = read(0, arr, arrsize);
    }
}

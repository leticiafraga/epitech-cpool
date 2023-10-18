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
        my_putchar('\n');
    }
}

void read_input(char *param)
{
    int arrsize = 30000;
    char arr[arrsize + 1];
    int size = 0;
    int cnt = 0;
    int prev = 0;
    char *line;

    size = read(0, arr, arrsize);
    while (size) {
        arr[size] = '\0';
        while (cnt < size) {
            prev = cnt;
            cnt = get_size(arr, cnt);
            line = get_lines(arr, prev, cnt++);
            find(param, line, cnt - prev);
        }
        size = read(0, arr, arrsize);
    }
}

/*
** EPITECH PROJECT, 2023
** GREP
** File description:
** Clone grep
*/
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/grep.h"

int get_size(char *arr, int init)
{
    int cnt = init;

    while (arr[cnt] != '\n' && arr[cnt] != '\0') {
        cnt++;
    }
    return cnt;
}

char *get_lines(char *arr, int init, int cnt)
{
    int j = 0;
    char *line = malloc(sizeof(char) * (cnt - init));

    while (init < cnt) {
        line[j] = arr[init];
        init++;
        j++;
    }
    line[j] = '\0';
    return line;
}

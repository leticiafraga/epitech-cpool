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

static void put_err(int fd, char *str)
{
    if (fd != -1)
        return;
    my_put_err("grep: ");
    my_put_err(str);
    my_put_err(": ");
    switch (errno) {
    case 13:
        my_put_err("Permission denied");
        break;
    default:
        my_put_err("No such file or directory");
        break;
    }
    my_put_err("\n");
}

static int get_size(char *arr, int init)
{
    int cnt = init;

    while (arr[cnt] != '\n' && arr[cnt] != '\0') {
        cnt++;
    }
    return cnt;
}

static char *get_lines(char *arr, int init, int cnt)
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

void find(char *line, char *pattern)
{
    if (my_strstr(line, pattern)) {
        my_putstr(line);
        my_putchar('\n');
    }
}

static void it_lines(char *arr, char *param, int size)
{
    int prev = 0;
    int cnt = 0;
    char *line;

    while (cnt < size) {
        prev = cnt;
        cnt = get_size(arr, cnt);
        line = get_lines(arr, prev, cnt++);
        find(line, param);
    }
}

void read_files(int ac, char **av)
{
    char arr[30001];
    int fd = 0;
    int size = 0;

    for (int i = 2; i < ac; i++) {
        fd = open(av[i], O_RDONLY);
        put_err(fd, av[i]);
        size = read(fd, arr, 30000);
        arr[size] = '\0';
        it_lines(arr, av[1], size);
    }
}

int main(int ac, char **av)
{
    if (ac == 0) {
        return 84;
    }
    read_files(ac, av);
    return 0;
}

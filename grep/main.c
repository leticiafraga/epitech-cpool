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

static void put_name(int ac, char *name)
{
    if (ac > 3) {
        my_putstr(name);
        my_putstr(":");
    }
}

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

static void find(char *line, int ac, char **av, int i)
{
    if (my_strstr(line, av[1])) {
        put_name(ac, av[i]);
        my_putstr(line);
        my_putchar('\n');
    }
}

static void it_lines(int ac, char **av, int i, int fd)
{
    char arr[30001];
    int size = 0;
    int prev = 0;
    int cnt = 0;
    char *line;

    size = read(fd, arr, 30000);
    arr[size] = '\0';
    while (cnt < size) {
        prev = cnt;
        cnt = get_size(arr, cnt);
        line = get_lines(arr, prev, cnt++);
        find(line, ac, av, i);
    }
}

void read_files(int ac, char **av)
{
    int fd = 0;

    for (int i = 2; i < ac; i++) {
        fd = open(av[i], O_RDONLY);
        put_err(fd, av[i]);
        it_lines(ac, av, i, fd);
    }
}

int main(int ac, char **av)
{
    if (ac == 1) {
        my_putstr("Usage: grep [OPTION]... PATTERNS [FILE]...\n");
        my_putstr("Try 'grep --help' for more information.\n");
        return 84;
    }
    if (ac == 2)
        read_input(av[1]);
    read_files(ac, av);
    return 0;
}

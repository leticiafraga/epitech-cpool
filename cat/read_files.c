/*
** EPITECH PROJECT, 2023
** CAT
** File description:
** Clone cat
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"

void read_files(int ac, char **av)
{
    int arrsize = 30000;
    char *arr[arrsize + 1];
    int fd = 0;
    int size = 0;

    for (int i = 1; i < ac; i++) {
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            my_put_err("cat: ");
            my_put_err(av[i]);
            my_put_err(": No such file or directory\n");
        }
        size = read(fd, arr, arrsize);
        while (size > 0) {
            write(1, arr, size);
            size = read(fd, arr, arrsize);
        }
        close(fd);
    }
}

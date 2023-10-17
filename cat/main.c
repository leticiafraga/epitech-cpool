/*
** EPITECH PROJECT, 2023
** CAT
** File description:
** Clone cat
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"

int main(int ac, char **av)
{
    int arrsize = 30000;
    char *arr[arrsize + 1];
    int size = 0;

    if (ac == 1) {
        size = read(0, arr, arrsize);
        while (size) {
            write(1, arr, size);
            size = read(0, arr, arrsize);
        }
        return 0;
    }
    read_files(ac, av);
    return 0;
}

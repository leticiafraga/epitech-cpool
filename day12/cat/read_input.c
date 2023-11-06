/*
** EPITECH PROJECT, 2023
** CAT
** File description:
** Clone cat
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/cat.h"

void read_input(void)
{
    int arrsize = 30000;
    char *arr[arrsize + 1];
    int size = 0;

    size = read(0, arr, arrsize);
    while (size) {
        write(1, arr, size);
        size = read(0, arr, arrsize);
    }
}

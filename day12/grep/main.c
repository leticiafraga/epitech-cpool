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

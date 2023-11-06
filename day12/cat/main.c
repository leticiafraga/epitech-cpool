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

int main(int ac, char **av)
{
    if (ac == 1) {
        read_input();
        return 0;
    }
    read_files(ac, av);
    return 0;
}

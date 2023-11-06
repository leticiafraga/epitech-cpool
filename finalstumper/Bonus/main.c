/*
** EPITECH PROJECT, 2023
** MAIN
** File description:
** Main function for Rush 3
*/

#include <unistd.h>
#include "include/rush3.h"
#include "include/buff_size.h"
int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;

    len = read(0, buff + offset, BUFF_SIZE - offset);
    while (len > 0) {
        offset = offset + len;
        len = read(0, buff + offset, BUFF_SIZE - offset);
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}

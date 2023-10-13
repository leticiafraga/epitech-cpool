/*
** EPITECH PROJECT, 2023
** SWAP_ENDIAN_COLOR
** File description:
** Changes the endianness of the color and returns it
*/
struct IntChar {
    char char1;
    char char2;
    char char3;
    char char4;
};

union Color {
    int i;
    struct IntChar ch;
};

int swap_endian_color(int color)
{
    union Color c;
    char tmp;

    c.i = color;
    tmp = c.ch.char1;
    c.ch.char1 = c.ch.char4;
    c.ch.char4 = tmp;
    tmp = c.ch.char2;
    c.ch.char2 = c.ch.char3;
    c.ch.char3 = tmp;
    return c.i;
}

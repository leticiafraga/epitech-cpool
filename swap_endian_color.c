/*
** EPITECH PROJECT, 2023
** SWAP_ENDIAN_COLOR
** File description:
** Changes the endianness of the color and returns it
*/

union Color {
    int i;
    char str[4];
};

int swap_endian_color(int color)
{
    union Color c;
    int newc = 0;

    c.i = color;
    for (int i = 0; i < 4; i++) {
        newc += c.str[i] << (8 * (3 - i));
    }
    return newc;
}

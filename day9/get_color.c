/*
** EPITECH PROJECT, 2023
** GET_COLOR
** File description:
** Returns the color as an int by handling its three RGB components.
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int res = (int) red << 16;

    res += green << 8;
    res += blue;
    return res;
}

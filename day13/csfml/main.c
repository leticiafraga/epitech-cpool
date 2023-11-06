/*
** EPITECH PROJECT, 2023
** CSFML
** File description:
** CSFML exp
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
int main(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;

    window = sfRenderWindow_create(
        mode, "SFML window", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}

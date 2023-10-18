#include <SFML/Graphics.h>
#include <stdlib.h>
int main()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;

    window = sfRenderWindow_create(
        mode, "SFML window", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window))
    {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}

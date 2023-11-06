/*
** EPITECH PROJECT, 2023
** COUNT_ISLAND
** File description:
** counts islands
*/

int search_neig(char **world, int len, int col, char count)
{
    if (world[len][col] == 'X')
        world[len][col] = count;
    else
        return 0;
    if (len > 0)
        search_neig(world, len - 1, col, count);
    if (col > 0)
        search_neig(world, len, col - 1, count);
    if (world[len][col + 1] != '\0')
        search_neig(world, len, col + 1, count);
    if (world[len + 1] != 0)
        search_neig(world, len + 1, col, count);
    return 1;
}

int search_line(char **world, int len, char *count)
{
    int i = 0;

    while (world[len][i] != '\0') {
        if (search_neig(world, len, i, *count) == 1) {
            *count += 1;
        }
        i++;
    }
}

int count_island(char **world)
{
    int len = 0;
    int col = 0;
    char count = '0';

    while (world[len] != 0) {
        search_line(world, len, &count);
        len++;
    }
    return count - '0';
}

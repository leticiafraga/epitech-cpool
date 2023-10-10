/*
** EPITECH PROJECT, 2023
** MY_SORT_PARAMS
** File description:
** Program that displays its arguments in ASCII order.
*/

void compare(char **argv, int j)
{
    char *tmp;

    if (my_strcmp(argv[j], argv[j + 1]) > 0) {
        tmp = argv[j];
        argv[j] = argv[j + 1];
        argv[j + 1] = tmp;
    }
}

int main(int argc, char **argv)
{
    int i;
    int j;

    for (i = 0; i < argc; i++) {
        for (j = 1; j < argc - i - 1; j++) {
            compare(argv, j);
        }
    }
    for (i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}

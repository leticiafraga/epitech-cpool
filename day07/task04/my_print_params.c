/*
** EPITECH PROJECT, 2023
** MY_PRINT_PARAMS
** File description:
** Program that displays its arguments (received on the command line).
*/

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}

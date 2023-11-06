/*
** EPITECH PROJECT, 2023
** MY_REV_PARAMS
** File description:
** Program that displays all the arguments received on the
** command line in reverse order
*/

int main(int argc, char **argv)
{
    for (int i = argc - 1; i >= 0; i--) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}

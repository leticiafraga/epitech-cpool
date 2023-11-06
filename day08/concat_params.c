/*
** EPITECH PROJECT, 2023
** CONCAT_PARAMS
** File description:
** Function that turns the command-line given arguments into
** a single string. Arguments are to be separated by '\n'
*/

char *concat_params(int argc, char **argv)
{
    int len = argc;
    char *res;

    for (int i = 0; i < argc; i++) {
        len = len + my_strlen(argv[i]);
    }
    res = malloc(sizeof(char) * len);
    for (int i = 0; i < argc; i++) {
        my_strcat(res, argv[i]);
        if (i != argc - 1)
            my_strcat(res, "\n");
    }
    return res;
}

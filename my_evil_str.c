/*
** EPITECH PROJECT, 2023
** MY_EVIL_STR
** File description:
** Function that returns a reversed string.
*/
int get_len(char *str)
{
    int i = 0;
    char c;

    do {
        c = str[i];
        if (c == '\0') {
            return i;
        }
        i = i + 1;
    } while (c != '\0');
    return i;
}

void swap_char(char *a , char *b)
{
    char content = *a;

    *a = *b;
    *b = content;
    return;
}

char *my_evil_str(char *str)
{
    int len = get_len(str);
    int last = len - 1;
    int middle = last / 2;
    int i;
    for (i = 0; i <= middle; i++) {
        swap_char(&str[i], &str[last]);
        last--;
    }
    return str;
}

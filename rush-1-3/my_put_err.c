/*
** EPITECH PROJECT, 2023
** MY_PUT_ERR
** File description:
** Displays an error message (Invalid size\n) on the standard error output
*/

void my_put_err(void)
{
    char *msg = "Invalid size\n";

    write(2, msg, 15);
}

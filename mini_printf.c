/*
** EPITECH PROJECT, 2023
** MINI_PRINTF
** File description:
** Mini printf
*/

#include <stdarg.h>
#include "include/my.h"

int get_format(const char *format, va_list args)
{
    switch (*format) {
    case '%':
        my_putchar('%');
        break;
    case 'd':
        my_put_nbr(va_arg(args, int));
        break;
    case 'i':
        my_put_nbr(va_arg(args, int));
        break;
    case 's':
        my_putstr(va_arg(args, char *));
        break;
    case 'c':
        my_putchar(va_arg(args, int));
        break;
    }
    return 0;
}

int mini_printf(const char *format, ...)
{
    va_list args;

    va_start(args, format);
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            get_format(format, args);
        } else
            my_putchar(*format);
        format++;
    }
    va_end(args);
}

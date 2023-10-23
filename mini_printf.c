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
        return 1;
    case 'd':
        return my_put_nbr(va_arg(args, int));
    case 'i':
        return my_put_nbr(va_arg(args, int));
    case 's':
        return my_putstr(va_arg(args, char *));
    case 'c':
        my_putchar(va_arg(args, int));
        return 1;
    }
    return 0;
}

int mini_printf(const char *format, ...)
{
    va_list args;
    int cnt = 0;

    va_start(args, format);
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            cnt += get_format(format, args);
        } else {
            my_putchar(*format);
            cnt++;
        }
        format++;
    }
    va_end(args);
    return cnt;
}

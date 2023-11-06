#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../../include/my.h"

int mini_printf(const char *format, ...);

Test (mini_printf, simple_string, .init = cr_redirect_stdout)
{
    int cnt = mini_printf ( " hello world " ) ;
    cr_assert_stdout_eq_str ( " hello world " ) ;
    cr_assert_eq (cnt, 13);
}

Test (mini_printf, more_params, .init = cr_redirect_stdout)
{
    char str[] = "Je m'appelle Leticia, j'ai 23 ans";
    int cnt = mini_printf("Je m'appelle %s, j'ai %d ans", "Leticia", 23);
    cr_assert_stdout_eq_str(str);
    cr_assert_eq (cnt, my_strlen(str));
}

Test (mini_printf, chars, .init = cr_redirect_stdout)
{
    int cnt = mini_printf ("%c%c%c%c", 'h', 'o', 'l', 'a') ;
    cr_assert_stdout_eq_str("hola");
    cr_assert_eq(cnt, 4);
}

Test (mini_printf, percent, .init = cr_redirect_stdout)
{
    int cnt = mini_printf ("%d%%", -100) ;
    cr_assert_stdout_eq_str("-100%");
    cr_assert_eq(cnt, 5);
}

Test (mini_printf, last_one, .init = cr_redirect_stdout)
{
    int cnt;
    char str[] = "Leticia";
    char res[] = "The word %Letic% has 5 characters.\n";

    str[5] = '\0';

    cnt = mini_printf("The word %%%s%% has %i characters.\n",
        str, my_strlen(str));
    cr_assert_stdout_eq_str(res);
    cr_assert_eq(cnt, my_strlen(res));
}

Test (mini_printf, no_equiv_flag, .init = cr_redirect_stdout)
{
    int cnt = mini_printf ("%d%%%r", 1);
    cr_assert_stdout_eq_str("1%%r");
    cr_assert_eq(cnt, 4);
}

Test (mini_printf, error, .init = cr_redirect_stdout)
{
    int cnt = mini_printf ("%%%");
    cr_assert_eq(cnt, -1);
}

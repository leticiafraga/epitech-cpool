#include <criterion/criterion.h>
#include <criterion/redirect.h>

int mini_printf(const char *format, ...);

Test (mini_printf, simple_string, .init = cr_redirect_stdout)
{
    mini_printf ( " hello world " ) ;
    cr_assert_stdout_eq_str ( " hello world " ) ;
}

Test (mini_printf, more_params, .init = cr_redirect_stdout)
{
    mini_printf("Je m'appelle %s, j'ai %d ans", "Leticia", 23);
    cr_assert_stdout_eq_str("Je m'appelle Leticia, j'ai 23 ans");
}

Test (mini_printf, chars, .init = cr_redirect_stdout)
{
    mini_printf ("%c%c%c%c", 'h', 'o', 'l', 'a') ;
    cr_assert_stdout_eq_str("hola");
}

Test (mini_printf, percent, .init = cr_redirect_stdout)
{
    mini_printf ("%d%%", 100) ;
    cr_assert_stdout_eq_str("100%");
}

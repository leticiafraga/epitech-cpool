#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test (rush3, rush_1_1_rec_2_2, .init=cr_redirect_stdout)
{
    rush3("oo\noo\n") ;
    cr_assert_stdout_eq_str ("[rush-1-1] 2 2\n");
}

Test (rush3, rush_1_1_rec_3_3, .init=cr_redirect_stdout)
{
    rush3("o-o\n| |\no-o\n");
    cr_assert_stdout_eq_str("[rush-1-1] 3 3\n");
}

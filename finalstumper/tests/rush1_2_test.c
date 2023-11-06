#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include "../include/rush3.h"

Test (rush1_2, rush_1_1_rec_2_2, .init=cr_redirect_stdout)
{
    rush3("/\\\n\\/\n") ;
    cr_assert_stdout_eq_str ("[rush1-2] 2 2\n");
}

Test (rush1_2, rush_1_1_rec_3_3, .init=cr_redirect_stdout)
{
    rush3("/*\\\n* *\n\\*/\n");
    cr_assert_stdout_eq_str("[rush1-2] 3 3\n");
}

Test (rush1_2, rush_1_1_rec_1_1, .init=cr_redirect_stdout)
{
    rush3("*\n");
    cr_assert_stdout_eq_str("[rush1-2] 1 1\n");
}

Test (rush1_2, test_1_3, .init=cr_redirect_stdout)
{
    rush3("*\n*\n*\n");
    cr_assert_stdout_eq_str("[rush1-2] 1 3\n");
}

Test (rush1_2, test_3_1, .init=cr_redirect_stdout)
{
    rush3("***\n");
    cr_assert_stdout_eq_str("[rush1-2] 3 1\n");
}

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include "../include/rush3.h"

Test (rush3, rush_1_1_rec_2_2n, .init=cr_redirect_stdout)
{
    rush3("o-o\noo\n") ;
    cr_assert_stdout_eq_str ("none\n");
}

Test (rush3, rush_1_1_rec_3_3n, .init=cr_redirect_stdout)
{
    rush3("o-o\n||\no-o\n");
    cr_assert_stdout_eq_str("none\n");
}

Test (rush3, test_1_3n, .init=cr_redirect_stdout)
{
    rush3("o\n|\n");
    cr_assert_stdout_eq_str("none\n");
}

#include <criterion/criterion.h>

Test(my_strdup, test_my_strdup) {
    char str[] = "leticia";
    char *str2;

    str2 = my_strdup(str);
    cr_assert_str_eq(str, str2);
}

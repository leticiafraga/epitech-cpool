#include <criterion/criterion.h>

Test(my_strstr, test_my_strstr) {
    cr_assert_str_eq(my_strstr("Hello world", "world"), "world");
}

Test(my_strstr, test_not_found) {
    cr_assert_eq(my_strstr("Hello world", "worlde"), NULL);
}

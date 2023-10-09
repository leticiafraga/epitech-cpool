#include <criterion/criterion.h>

Test(my_strncmp, test_my_strncmp) {
    cr_assert(my_strncmp("Hello world", "Hello world") == 0);
}

Test(my_strncmp, test_equal_partial) {
    cr_assert(my_strncmp("Hello world", "Hello") == 0);
}

Test(my_strncmp, test_not_equal) {
    cr_assert(my_strncmp("Hello world", "world") != 0);
}

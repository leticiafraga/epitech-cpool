#include <criterion/criterion.h>

Test(my_strcmp, test_my_strcmp) {
    cr_assert(my_strcmp("Hello world", "Hello world") == 0);
}

Test(my_strcmp, test_not_equal_smaller) {
    cr_assert(my_strcmp("Hello world", "Aorld") > 0);
}

Test(my_strcmp, test_not_equal_bigger) {
    cr_assert(my_strcmp("Hello world", "Wello") < 0);
}

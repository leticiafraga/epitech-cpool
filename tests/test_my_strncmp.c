#include <criterion/criterion.h>

Test(my_strncmp, test_my_strncmp) {
    cr_assert(my_strncmp("Hello world", "Hello world", 11) == 0);
}

Test(my_strncmp, test_equal_partial) {
    cr_assert(my_strncmp("Hello world", "Helloo", 5) == 0);
}

Test(my_strncmp, test_not_equal) {
    cr_assert(my_strncmp("Hello world", "world", 6) != 0);
}

Test(my_strncmp, test_not_equal2) {
    cr_assert(my_strncmp("world", "worled", 5) != 0);
}

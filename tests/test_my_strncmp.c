#include <criterion/criterion.h>

Test(my_strncmp, test_my_strncmp) {
    cr_assert_eq(my_strncmp("Hello world", "Hello world", 30),
                 strncmp("Hello world", "Hello world", 30));
}

Test(my_strncmp, test_equal_partial2) {
    cr_assert_eq(my_strncmp("Hello world", "Hello", 5),
                 strncmp("Hello world", "Hello", 5));
}

Test(my_strncmp, test_equal_partial) {
    cr_assert_eq(my_strncmp("Hell", "Hello", 5),
                 strncmp("Hell", "Hello", 5));
}

Test(my_strncmp, test_not_equal) {
    cr_assert_eq(my_strncmp("Hello world", "world", 6),
                 strncmp("Hello world", "world", 6));
}

Test(my_strncmp, test_not_equal2) {
    cr_assert_eq(my_strncmp("world", "worled", 5),
              strncmp("world", "worled", 5));
}

Test(my_strncmp, test_not_equal3) {
    cr_assert_eq(my_strncmp("", "worled", 2),
              strncmp("", "worled", 2));
}

Test(my_strncmp, test_equal_zero) {
    cr_assert_eq(my_strncmp("world", "", 0),
              my_strncmp("world", "", 0));
}

Test(my_strncmp, test_equal_zero2) {
    cr_assert_eq(my_strncmp("", "", 0),
              my_strncmp("", "", 0));
}

Test(my_strncmp, test_equal_zero3) {
    cr_assert_eq(my_strncmp("", "", 5),
                 my_strncmp("", "", 5));
}

Test(my_strncmp, test_bigger_n) {
    cr_assert_eq(my_strncmp("Hello", "Hello world", 20),
                 strncmp("Hello", "Hello world", 20));
}

Test(my_strncmp, test_bigger_n2) {
    cr_assert_eq(my_strncmp("Hello world", "Hello", 20),
                 strncmp("Hello world", "Hello", 20));
}

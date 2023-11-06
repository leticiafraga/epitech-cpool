#include <criterion/criterion.h>

Test(my_strncpy, test_my_strncpy) {
    char c1[8] = "Leticia";
    char c2[8] = "oi123";
    my_strncpy(c2, c1, 2);
    cr_expect(my_strlen(c2) == 5, "Expected length of 5");
    cr_assert_str_eq(c2, "Le123");
}

Test(my_strncpy, test_bigger_n) {
    char c1[8] = "Leticia";
    char c2[20] = "oi123";
    my_strncpy(c2, c1, 10);
    cr_expect(my_strlen(c2) == 7, "Expected length of 7");
    cr_assert_str_eq(c2, "Leticia");
}

Test(my_strncpy, test_neg_n) {
    char c1[8] = "Leticia";
    char c2[20] = "oi123";
    my_strncpy(c2, c1, -1);
    cr_assert_str_eq(c2, "oi123");
}


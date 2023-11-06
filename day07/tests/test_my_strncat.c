#include <criterion/criterion.h>
char *my_strncat(char *dest, char const *src);

Test(my_strncat, test_my_strncat) {
    char str1[20] = "Leticia ";
    char str2[20] = "Fraga";

    cr_assert_str_eq(my_strncat(str1, str2, 4), strncat(str1, str2, 4));
}

Test(my_strncat, test_bigger_n) {
    char str1[20] = "Leticia ";
    char str2[20] = "Fraga";

    cr_assert_str_eq(my_strncat(str1, str2, 8), strncat(str1, str2, 8));
}


Test(my_strncat, test_n_zero) {
    char str1[20] = "Leticia ";
    char str2[20] = "Fraga";

    cr_assert_str_eq(my_strncat(str1, str2, 0), strncat(str1, str2, 0));
}

Test(my_strncat, test_n_neg) {
    char str1[20] = "Leticia ";
    char str2[20] = "Fraga";

    cr_assert_str_eq(my_strncat(str1, str2, -2), strncat(str1, str2, -2));
}


Test(my_strncat, test_empty_str) {
    char str1[20] = "Leticia ";
    char str2[20] = "";

    cr_assert_str_eq(my_strncat(str1, str2, 1), strncat(str1, str2, 1));
}

Test(my_strncat, test_empty_str2) {
    char str1[20] = "";
    char str2[20] = "Fraga";

    cr_assert_str_eq(my_strncat(str1, str2, 3), strncat(str1, str2, 3));
}

#include <criterion/criterion.h>
char *my_strcat(char *dest, char const *src);

Test(my_strstr, test_my_strcat) {
    char str1[20] = "Leticia ";
    char str2[20] = "Fraga";

    cr_assert_str_eq(my_strcat(str1, str2), strcat(str1, str2));
}

Test(my_strstr, test_empty_str) {
    char str1[20] = "Leticia ";
    char str2[20] = "";

    cr_assert_str_eq(my_strcat(str1, str2), strcat(str1, str2));
}

Test(my_strstr, test_empty_str2) {
    char str1[20] = "";
    char str2[20] = "Fraga";

    cr_assert_str_eq(my_strcat(str1, str2), strcat(str1, str2));
}

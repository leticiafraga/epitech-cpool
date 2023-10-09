#include <criterion/criterion.h>
char *my_strstr(char *str, char const *to_find);

Test(my_strstr, test_my_strstr) {    
    cr_assert_str_eq(my_strstr("Hello world", "world"), "world");
}

Test(my_strstr, test_my_strstr2) {
    cr_assert_str_eq(my_strstr("Hello world", "Hello world"), "Hello world");
}

Test(my_strstr, test_my_strstr3) {
    char str1[20] = "Leticia Fraga";
    char str2[20] = "Frag";

    cr_assert_str_eq(my_strstr(str1, str2), strstr(str1, str2));
}

Test(my_strstr, test_not_found) {
    cr_assert_eq(my_strstr("Hello world", "worlde"), NULL);
}

#include <criterion/criterion.h>
char *my_strlowcase(char *str);

Test(my_strlowcase, test_my_strlowcase) {
    char str[20] = "Hello wOrlD";
    cr_assert_str_eq(my_strlowcase(str), "hello world");
}

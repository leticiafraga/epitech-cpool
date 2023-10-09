#include <criterion/criterion.h>
char *my_strupcase(char *str);

Test(my_strupcase, test_my_strupcase) {
    char str[20] = "Hello world";
    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD");
}

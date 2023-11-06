#include <criterion/criterion.h>
char *my_str_isupper(char *str);

Test(my_str_isupper, test_my_str_isupper) {
    char str[10] = "LETICIA";
    
    cr_assert_eq(my_str_isupper(str), 1);
}

Test(my_str_isupper, test_my_str_not_upper) {
    char str[20] = "HEY_HOW";

    cr_assert_eq(my_str_islower(str), 0);
}

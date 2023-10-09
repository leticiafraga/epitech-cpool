#include <criterion/criterion.h>
char *my_str_islower(char *str);

Test(my_str_islower, test_my_str_islower) {
    char str[10] = "leticia";
    
    cr_assert_eq(my_str_islower(str), 1);
}

Test(my_str_islower, test_my_str_not_lower) {
    char str[20] = "hey, how are you?";

    cr_assert_eq(my_str_islower(str), 0);
}

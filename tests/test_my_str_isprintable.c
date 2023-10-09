#include <criterion/criterion.h>
char *my_str_isprintable(char *str);

Test(my_str_isprintable, test_my_str_isprintable) {
    char str[20] = "hey, how are you?";
    
    cr_assert_eq(my_str_isprintable(str), 1);
}

Test(my_str_isprintable, test_my_str_not_printable) {
    char str[20] = "hey! how aer you?";
    str[5] = '\n';
    
    cr_assert_eq(my_str_isprintable(str), 0);
}

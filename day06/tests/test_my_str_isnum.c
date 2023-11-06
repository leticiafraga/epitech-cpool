#include <criterion/criterion.h>
char *my_str_isnum(char *str);

Test(my_str_isnum, test_my_str_isnum) {
    char str[] = "1230";
    
    cr_assert_eq(my_str_isnum(str), 1);
}

Test(my_str_isnum, test_not_num) {
    char str[50] = "? 42WORds forty-two; fifty+one";

    cr_assert_eq(my_str_isnum(str), 0);
}



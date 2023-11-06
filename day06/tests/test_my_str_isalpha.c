#include <criterion/criterion.h>
char *my_str_isalpha(char *str);

Test(my_str_isalpha, test_my_str_isalpha) {
    char str[50] = "hey, how are you? 42WORds forty-two; fifty+one";
    char str2[] = "LETiCIa";
    
    cr_assert_eq(my_str_isalpha(str), 0);
    cr_assert_eq(my_str_isalpha(str2), 1);
}

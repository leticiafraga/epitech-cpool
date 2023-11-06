#include <criterion/criterion.h>
char *my_strcapitalize(char *str);

Test(my_strcapitalize, test_my_strcapitalize) {
    char str[50] = "hey, how are you? 42WORds forty-two; fifty+one";
    char str2[] = "LETICIA a FRaGA";
    
    cr_assert_str_eq(my_strcapitalize(str),
                     "Hey, How Are You? 42words Forty-Two; Fifty+One");
    cr_assert_str_eq(my_strcapitalize(str2),
                     "Leticia A Fraga");

}

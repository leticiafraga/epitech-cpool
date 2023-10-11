#include <criterion/criterion.h>

char **my_str_to_word_array(char const *str);

Test(my_str_to_word_arr, test_my_str_to_word_arr_simple) {
    char str[] = "leticia fraga";
    char **str2;

    str2 = my_str_to_word_array(str);
    cr_assert_str_eq(str2[0], "leticia");
    cr_assert_str_eq(str2[1], "fraga");
    cr_assert_eq(str2[2], NULL);
}

Test(my_str_to_word_arr, test_my_str_to_word_arr) {
    char str[] = " leticia      fraga ";
    char **str2;
    
    str2 = my_str_to_word_array(str);
    cr_assert_str_eq(str2[0], "leticia");
    cr_assert_str_eq(str2[1], "fraga");
    cr_assert_eq(str2[2], NULL);
}

Test(my_str_to_word_arr, test_my_str_to_word_arr2) {
    char str[] = " leticia  ***!@#$1238()-a=    fraga ";
    char **str2;

    str2 = my_str_to_word_array(str);
    cr_assert_str_eq(str2[0], "leticia");                                 
    cr_assert_str_eq(str2[1], "1238");
    cr_assert_str_eq(str2[2], "a");
    cr_assert_str_eq(str2[3], "fraga");
    cr_assert_eq(sizeof(str) / sizeof (char *), 4);
}   

#include <criterion/criterion.h>
char *my_str_isnum(char *str);

Test(my_getnbr_base, test_my_getnbr_base) {    
    cr_expect_eq(my_getnbr_base("101", "01"), 5);
}

Test(my_getnbr_base, test_negsymbols) {
    cr_expect_eq(my_getnbr_base("-+--101", "01"), -5);
}


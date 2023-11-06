#include <criterion/criterion.h>
char *my_str_isnum(char *str);

Test(my_getnbr_base, test_empty_base) {
    cr_expect_eq(my_getnbr_base("101", ""), 0);
}

Test(my_getnbr_base, test_empty_nbr) {
    cr_expect_eq(my_getnbr_base("", "01"), 0);
}

Test(my_getnbr_base, test_my_getnbr_base) {    
    cr_expect_eq(my_getnbr_base("101", "01"), 5);
}

Test(my_getnbr_base, test_negsymbols) {
    cr_expect_eq(my_getnbr_base("-+--101", "01"), -5);
}

Test(my_getnbr_base, test_hex_my_getnbr_base) {
    cr_expect_eq(my_getnbr_base("7B", "0123456789ABCDEF"), 123);
}

Test(my_getnbr_base, test_hex_negsymbols) {
    cr_expect_eq(my_getnbr_base("+++--+7B", "0123456789ABCDEF"), 123);       
}


Test(my_getnbr_base, test_hex_big) {
    cr_expect_eq(my_getnbr_base("7FFFFFFF", "0123456789ABCDEF"), 2147483647);
}

Test(my_getnbr_base, test_hex_small) {
    cr_expect_eq(my_getnbr_base("-80000000", "0123456789ABCDEF"), -2147483648);
}

Test(my_getnbr_base, test_hex_bigger) {
    cr_expect_eq(my_getnbr_base("80000000", "0123456789ABCDEF"), 0);
}

Test(my_getnbr_base, test_hex_smaller) {
    cr_expect_eq(my_getnbr_base("-80000001", "0123456789ABCDEF"), 0);
}

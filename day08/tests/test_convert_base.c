#include <criterion/criterion.h>

Test(convert_base, test_convert_base) {
    char *str1 = "10011010010";
    char *str2 = "01";
    char *str3 = "0123456789ABCDEF";

    cr_assert_str_eq(convert_base(str1, str2, str3), "4D2");
}

Test(convert_base, test_convert_bin_dec) {
    char *str1 = "10011010010";
    char *str2 = "01";
    char *str3 = "0123456789";

    cr_assert_str_eq(convert_base(str1, str2, str3), "1234");
}

Test(convert_base, test_convert_dec_bin) {
    char *str1 = "1234";
    char *str2 = "0123456789";
    char *str3 = "01";

    cr_assert_str_eq(convert_base(str1, str2, str3), "10011010010");
}

Test(convert_base, test_convert_base_neg) {
    char *str1 = "-10011010010";
    char *str2 = "01";
    char *str3 = "0123456789ABCDEF";

    cr_assert_str_eq(convert_base(str1, str2, str3), "-4D2");
}

Test(convert_base, test_convert_bin_dec_neg) {
    char *str1 = "-+-10011010010";
    char *str2 = "01";
    char *str3 = "0123456789";

    cr_assert_str_eq(convert_base(str1, str2, str3), "1234");
}

Test(convert_base, test_convert_dec_bin_neg) {
    char *str1 = "---1234";
    char *str2 = "0123456789";
    char *str3 = "01";

    cr_assert_str_eq(convert_base(str1, str2, str3), "-10011010010");
}

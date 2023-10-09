#include <criterion/criterion.h>

Test(my_strncpy, test_my_strncpy) {
    char c1[8] = "Leticia";
    char c2[8] = "oi123";
    my_strncpy(c2, c1, 2);
    cr_expect(my_strlen(c2) == 5, "Expected length of 5");
    cr_expect(c1[0] == c2[0], "Same initial letter");
    cr_expect(c1[1] == c2[1], "Same second letter");
    cr_expect(c1[2] != c2[2], "Different third letter");
}

Test(my_strncpy, test_bigger_n) {
    char c1[8] = "Leticia";
    char c2[20] = "oi123";
    my_strncpy(c2, c1, 10);
    cr_expect(my_strlen(c2) == 7, "Expected length of 7");
    cr_expect(c1[0] == c2[0], "Same initial letter");
    cr_expect(c1[6] == c2[6], "Same last letter");
    cr_expect(c1[7] == '\0', "End of str");
}

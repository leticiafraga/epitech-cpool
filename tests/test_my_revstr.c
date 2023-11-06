/*
** EPITECH PROJECT, 2023
** TESTS MY_STRCPY
** File description:
** Unit tests for my_strcpy
*/

#include <criterion/criterion.h>

Test(my_revstr, test_my_revstr) {
    char c1[8] = "Leticia";

    my_revstr(c1);
    cr_expect(c1[0] == 'a', "Rev");
    cr_expect(c1[1] == 'i', "Rev");
    cr_expect(c1[2] == 'c', "Rev");
    cr_expect(c1[3] == 'i', "Rev");
    cr_expect(c1[4] == 't', "Rev");
    cr_expect(c1[5] == 'e', "Rev");
    cr_expect(c1[6] == 'L', "Rev");
}

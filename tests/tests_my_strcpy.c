/*
** EPITECH PROJECT, 2023
** TESTS MY_STRCPY
** File description:
** Unit tests for my_strcpy
*/

#include <criterion/criterion.h>

Test(my_strcpy, test_my_strcpy) {
    char c1[8] = "Leticia";
    char c2[8] = "oi";
    my_strcpy(c2, c1);
    cr_expect(my_strlen(c2) == 7, "Expected length of 7.");
}

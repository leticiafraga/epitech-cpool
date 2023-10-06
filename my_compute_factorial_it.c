/*
** EPITECH PROJECT, 2023
** MY_COMPUTE_FACTORIAL_IT
** File description:
** Iterative function that returns the factorial of the number
** given as a parameter.
*/
int my_compute_factorial_it(int nb)
{
    int res = 1;

    if (nb < 0) {
        return 0;
    }
    for (int i = 1; i <= nb; i ++) {
        res *= i;
    }
    return res;
}

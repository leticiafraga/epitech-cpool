/*
** EPITECH PROJECT, 2023
** MY_COMPUTE_POWER_IT
** File description:
** Iterative function that returns the first argument raised to
** the power p, where p is the second argument
*/
int my_compute_power_it(int nb, int p)
{
    int res = nb;

    if (p == 0) {
        return 1;
    }
    if (p < 0 || nb == 0) {
        return 0;
    }
    for (int i = 1; i < p; i++) {
        res *= nb;
    }
    return res;
}

/*
** EPITECH PROJECT, 2023
** MY_COMPUTE_FACTORIAL_REC
** File description:
** Recursive function that returns the factorial of the number
** given as a parameter.
*/
int my_compute_factorial_rec(int nb)
{
    if (nb < 0) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    return nb * my_compute_factorial_rec(nb - 1);
}

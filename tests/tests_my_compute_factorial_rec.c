int main()
{
    my_put_nbr(my_compute_factorial_rec(5));
    my_putchar('\n');
    my_put_nbr(my_compute_factorial_rec(1));
    my_putchar('\n');
    my_put_nbr(my_compute_factorial_rec(-2));
    my_putchar('\n');
    my_put_nbr(my_compute_factorial_rec(0));
    my_putchar('\n');
    return 0;
}

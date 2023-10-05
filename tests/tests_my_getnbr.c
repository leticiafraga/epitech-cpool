int main()
{
    char *arr = "hel-1239w";
    char *arr2 = "1239w";
    char *arr3 = "hel-1239w45";

    my_put_nbr(my_getnbr(arr));
    my_putchar('\n');
    my_put_nbr(my_getnbr(arr2));
    my_putchar('\n');
    my_put_nbr(my_getnbr(arr3));
    my_putchar('\n');
    return 0;
}

int main()
{
    char *arr = "hel-1239w";
    char *arr2 = "1239w";

    my_put_nbr(my_getnbr(arr));
    my_putchar('\n');
    my_put_nbr(my_getnbr(arr2));
    my_putchar('\n');
    my_put_nbr(my_getnbr("----42"));
    my_putchar('\n');
    my_put_nbr(my_getnbr("+---+--++---+---+---+-42"));
    my_putchar('\n');
    my_put_nbr(my_getnbr("42a43"));
    my_putchar('\n');
    my_put_nbr(my_getnbr("11000000000000000000000042"));
    my_putchar('\n');
    my_put_nbr(my_getnbr("nfoqiewro-0jensf"));
    my_putchar('\n');
    my_put_nbr(my_getnbr("s0s"));
    my_putchar('\n');    
    return 0;
}

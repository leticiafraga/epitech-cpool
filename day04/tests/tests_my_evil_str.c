char *my_evil_str(char *arr);

int main ()
{
    char arr[] = "hello";
    char arr2[] = "a";
    char arr3[] = "leticia fraga";
    char arr4[] = "";

    my_putstr(my_evil_str(arr));
    my_putchar('\n');
    my_putstr(my_evil_str(arr2));
    my_putchar('\n');
    my_putstr(my_evil_str(arr3));
    my_putchar('\n');
    my_putstr(my_evil_str(arr4));
    my_putchar('\n');
    return 0;
}

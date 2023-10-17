#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>

void read_files(int ac, char **av);

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}

int error(void)
{
        write(2, "error", 5);
        return(0);
}

Test(cat, no_file, .init=redirect_all_stdout)
{
    char *arr[2];
    arr[1] = "test";
    read_files(2, arr);
    cr_assert_stderr_eq_str("cat: test: No such file or directory\n","");
}

Test(cat, file, .init=redirect_all_stdout)
{
    char *arr[2];
    arr[1] = "../tests/read_test";
    read_files(2, arr);
    cr_assert_stdout_eq_str("test\n","");
}

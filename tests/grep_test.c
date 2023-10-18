#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include "../include/grep.h"

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}

Test(grep, no_file, .init=redirect_all_stdout)
{
    char *arr[3];
    arr[1] = "A";
    arr[2] = "test";
    read_files(3, arr);
    cr_assert_stderr_eq_str("grep: test: No such file or directory\n","");
}

Test(grep, file, .init=redirect_all_stdout)
{
    char *arr[3];
    arr[1] = "te";
    arr[2] = "../tests/read_test";
    read_files(3, arr);
    cr_assert_stdout_eq_str("test\n","");
}

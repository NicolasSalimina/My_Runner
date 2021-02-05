/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** test_printf
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

/* void redirect_all(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
 */
Test(my_printf, simple)
{
    cr_assert_eq_str( my_printf("%d", 12), "12");
}
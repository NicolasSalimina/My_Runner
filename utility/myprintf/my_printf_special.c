/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-nicolas.salimina
** File description:
** my_printf_special
*/
#include "my.h"
#include <stdarg.h>

int my_printf_special(char const *str, int i)
{
    if (str[i] == '%' && str[i + 1] == '%') {
        my_putchar('%');
        i += 2;
    }
    return i;
}
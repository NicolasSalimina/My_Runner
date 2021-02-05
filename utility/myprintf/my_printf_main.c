/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-nicolas.salimina
** File description:
** my_printf_base
*/
#include "my.h"
#include <stdarg.h>

int my_printf_main(char const *str, int i, va_list list)
{
    if (str[i] == '%' && str[i + 1] == 'c') {
        my_putchar((char) va_arg(list, int));
        i += 2;
    }
    if (str[i] == '%' && str[i + 1] == 'd') {
        my_put_nbr((int) va_arg(list, int));
        i += 2;
    }
    if (str[i] == '%' && str[i + 1] == 's') {
        my_putstr((char *) va_arg(list, char *));
        i += 2;
    }
    if (str[i] == '%' && str[i + 1] == 'i') {
        my_put_nbr((int) va_arg(list, int));
        i += 2;
    }
    if (str[i] == '%' && str[i + 1] == 'u') {
        my_put_nbr((int) va_arg(list, int));
        i += 2;
    }
    return i;
}
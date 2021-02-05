/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-nicolas.salimina
** File description:
** my_printf
*/
#include <stdarg.h>
#include "my.h"
#include <math.h>

int my_printf(char const *str, ...)
{
    va_list list;

    va_start(list, str);

    for (int i = 0; str[i] != '\0'; i++) {
        i = my_printf_special(str, i);
        i = my_printf_main(str, i, list);
        while (str[i] == '%') {
            i = my_printf_special(str, i);
            i = my_printf_main(str, i, list);
        }
        if (str[i] == '\0')
            return 84;
        my_putchar(str[i]);
    }
    return 0;
}
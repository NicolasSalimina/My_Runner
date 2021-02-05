/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-nicolas.salimina
** File description:
** my_putstr
*/
#include <stdio.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}
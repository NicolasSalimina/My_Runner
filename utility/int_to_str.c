/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** int_to_str
*/
#include "my.h"

#include "my.h"

int find_div1(int nbr, int x)
{
    int div = 1;
    int count = 1;

    while (div * 10 < nbr) {
        div = div * 10;
        count += 1;
    }
    if (x == 0)
        return div;
    return count;
}

char *int_to_string(int nbr)
{
    int div = find_div1(nbr, 0);
    char *str = malloc(sizeof(char) * find_div1(nbr, 1));
    int i = 0;

    if (nbr < 0) {
        nbr = nbr * -1;
        my_putchar('-');
    }
    div = find_div1(nbr, 0);

    while (div >= 1) {
        str[i] = (nbr / div + '0');
        nbr = nbr % div;
        div = div / 10;
        i++;
    }
    str[i] = '\0';
    return str;
}

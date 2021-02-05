/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-nicolas.salimina
** File description:
** my_put_nbr
*/
#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int find_div(int nbr)
{
    int div = 1;

    while (div * 10 < nbr) {
        div = div * 10;
    }
    return div;
}

int my_put_nbr(int nbr)
{
    int div = find_div(nbr);

    if (nbr < 0) {
        nbr = nbr * -1;
        my_putchar('-');
    }
    div = find_div(nbr);

    while (div >= 1) {
        my_putchar(nbr / div + '0');
        nbr = nbr % div;
        div = div / 10;
    }
    return nbr;
}
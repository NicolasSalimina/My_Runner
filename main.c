/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy copy
** File description:
** main
*/
#include "my.h"

int main(int ac, char **av)
{
    params_t *param;

    ac = ac;
    av = av;

    param = my_params();
    window_management(param);
    free(param);
    return 0;
}
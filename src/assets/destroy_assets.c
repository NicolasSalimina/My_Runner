/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** destroy_assets
*/
#include "my.h"

void destroy_assets(params_t *param)
{
    for (int i = 0; i < 9; i++) {
        sfTexture_destroy(param->assets[i].texture);
        sfSprite_destroy(param->assets[i].sprite);
    }
}
/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** spacebar
*/
#include "my.h"
#include <stdio.h>

void positions_mc(params_t *param, sfVector2f pos)
{
    if (pos.y > 220 && param->Jumplimit == false) {
        sfSprite_move(param->assets[7].sprite, v2f(0, -10));
        if (pos.y == 400)
            param->assets[7].rect.left += 48;
        if (pos.y == 300)
            param->assets[7].rect.left += 48;
    }
}

bool spacebar(params_t *param)
{
    sfVector2f pos = sfSprite_getPosition(param->assets[7].sprite);
    positions_mc(param, pos);
    if (pos.y == 220) {
        param->Jumplimit = true;
        param->assets[7].rect.left += 48;
    }
    if (param->Jumplimit == true) {
        sfSprite_move(param->assets[7].sprite, v2f(0, 10));
    }
    if (pos.y == 550) {
        param->Jumplimit = false;
        param->isJumping = false;
        param->assets[7].rect.left += 48;
        param->assets[7].rect = conf_rect(44.7, 0 , 35, 40.2);
        sfSound_pause(param->sound);
    }
    return param->Jumplimit;
}
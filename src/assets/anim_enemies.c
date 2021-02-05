/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** anim_enemies
*/
#include "my.h"

void position_enemies(params_t *param)
{
    param->assets[8].pos.x -= 5 + param->speed;
    sfSprite_setPosition(param->assets[8].sprite, param->assets[8].pos);
    if (param->assets[8].pos.x < -300) {
        param->assets[8].pos.x = 2000;
        param->speed += 2;
        }
}

void hurt(params_t *param)
{
    float x = sfSprite_getPosition(param->assets[8].sprite).x;
    float y = sfSprite_getPosition(param->assets[8].sprite).y;


    sfFloatRect bound = sfSprite_getGlobalBounds(param->assets[7].sprite);

    if (sfFloatRect_contains(&bound, x, y)) {
        param->assets[8].pos.x = 1800;
        param->speed -= 5;
        param->game_over += 1;
        if (param->speed < 5)
            param->speed = 5;
    }
}

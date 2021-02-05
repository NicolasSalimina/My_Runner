/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** anim
*/
#include "my.h"

void sprite_texture(params_t *param)
{
    for (int i = 0; i < 9; i++)
        sfTexture_setRepeated(param->assets[i].texture, sfTrue);
    for (int i = 0; i < 9; i++)
        sfSprite_setTextureRect(param->assets[i].sprite, param->assets[i].rect);
}

void perso_anim(params_t *param, sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float mili_second = sfTime_asMilliseconds(time);

    if (70 < mili_second) {
        if (!param->isJumping)
            param->assets[7].rect.left += 48;
        param->assets[8].rect.left += 43.99;
        sfClock_restart(clock);
    }
}

void rect_left(params_t *param)
{
    param->assets[0].rect.left += 3;
    param->assets[1].rect.left += 3;
    param->assets[2].rect.left += 7;
    param->assets[3].rect.left += 7;
    param->assets[4].rect.left += 7;
    param->assets[5].rect.left += 12;
    param->assets[6].rect.left += 12;
}

void animation(params_t *param, sfClock *clock, sfClock *clock2)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float mili_second = sfTime_asMilliseconds(time);

    if (1 < mili_second) {
        position_enemies(param);
        rect_left(param);
        param->score_int += 1;
        sfClock_restart(clock);
    }
    hurt(param);
    perso_anim(param, clock2);
    sprite_texture(param);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** init_assets
*/
#include "my.h"
#include "define.h"

assets_t *init_assets_struct(void)
{
    assets_t *assets2 = malloc(sizeof(assets_t) * 9);

    assets2->texture = NULL;
    assets2->sprite = NULL;
    return assets2;
}


assets_t *conf_assets_texture(params_t *param)
{
    assets_t *assets2 = param->assets;

    assets2[0].texture = back;
    assets2[1].texture = moun;
    assets2[2].texture = wall;
    assets2[3].texture = col;
    assets2[4].texture = cand;
    assets2[5].texture = floor;
    assets2[6].texture = drag;
    assets2[7].texture = jump;
    assets2[8].texture = snake;
    assets2[8].pos.x = 1700;
    assets2[8].pos.y = 700;
    return assets2;
}

assets_t *conf_assets_rect(params_t *param)
{
    assets_t *assets2 = param->assets;

    assets2[0].rect = conf_rect(1080, 0, 1920, 1080);
    assets2[1].rect = conf_rect(1080, 0, 1920, 1080);
    assets2[2].rect = conf_rect(1080, 0 , 1920, 1080);
    assets2[3].rect = conf_rect(1080, 0, 1920, 1080);
    assets2[4].rect = conf_rect(1080, 0, 1920, 1080);
    assets2[5].rect = conf_rect(0, 0 , 1920, 1080);
    assets2[6].rect = conf_rect(1080, 0, 1920, 1080);
    assets2[7].rect = conf_rect(44.7, 0 , 35, 40.2);
    assets2[8].rect = conf_rect(0, 0 , 40, 15);

    return assets2;
}

void init_assets(params_t *param)
{
    assets_t *assets2 = conf_assets_texture(param);
    assets_t *assets = conf_assets_rect(param);

    for (int i = 0; i < 9; i++) {
        assets2[i].sprite = sfSprite_create();
        sfSprite_setTexture(assets2[i].sprite, assets2[i].texture, sfTrue);
    }
    sfSprite_setPosition(param->assets[7].sprite, v2f(0, 550));
    sfSprite_setScale(param->assets[7].sprite, scale(5.5, 5.5));
    sfSprite_setScale(param->assets[8].sprite, scale(4.5, 4.5));
    param->assets = assets2;
    param->assets = assets;
}
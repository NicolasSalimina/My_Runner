/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** init_window
*/
#include "my.h"

params_t *my_params(void)
{
    params_t *param = malloc(sizeof(params_t));
    sfVideoMode video = {1920, 1080, 32};
    char *title = "My_runner";

    param->window = sfRenderWindow_create(video, title, sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(param->window, 60);
    param->assets = init_assets_struct();
    param->isJumping = false;
    param->isGrounded = true;
    param->clock = sfClock_create();
    param->clock2 = sfClock_create();
    param->music = sfMusic_createFromFile("src/music/music.ogg");
    param->sound = sfSound_create();
    param->buffer = sfSoundBuffer_createFromFile("src/music/jump.ogg");
    param->score_int = 0;
    init_assets(param);
    return param;

}

sfVector2f v2f(float x, float y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;

    return pos;
}

sfVector2f scale(float x, float y)
{
    sfVector2f sca;

    sca.x = x;
    sca.y = y;

    return sca;
}
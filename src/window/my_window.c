/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** window_open
*/
#include "my.h"

void window_draw(params_t *param)
{
    for (int i = 0; i < 9; i++)
        sfRenderWindow_drawSprite(param->window, param->assets[i].sprite, NULL);
}

void window_open(params_t *param)
{
    param->game_over = 0;
    sfMusic_play(param->music);
    sfMusic_setLoop(param->music, sfTrue);
    while (sfRenderWindow_isOpen(param->window)) {
        if (param->game_over == 3) {
            close_window(param->window);
            my_printf("GAME OVER\n");
        }
        sfRenderWindow_clear(param->window, sfBlack);
        analyse_events(param, param->event);
        window_draw(param);
        animation(param, param->clock, param->clock2);
        score(param);
        sfRenderWindow_display(param->window);
    }
    my_printf("Your score is: %d\n", param->score_int);
    return;
}

void window_destroy(params_t *param)
{
    sfRenderWindow_destroy(param->window);
    sfMusic_destroy(param->music);
    sfSound_destroy(param->sound);
    sfSoundBuffer_destroy(param->buffer);
    destroy_assets(param);
}

void window_management(params_t *param)
{
    window_open(param);
    window_destroy(param);
}
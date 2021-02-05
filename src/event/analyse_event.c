/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy copy
** File description:
** analyse_event
*/
#include "my.h"
#include "define.h"

void analyse_events(params_t *param, sfEvent event)
{
        while (sfRenderWindow_pollEvent(param->window, &event)) {
                if (event.type == sfEvtClosed
                || event.key.code == sfKeyEscape )
                        close_window(param->window);
                if (event.key.code == sfKeySpace && !param->isJumping) {
                        param->isJumping = true;
                        param->Jumplimit = false;
                        sfSound_setBuffer(param->sound, param->buffer);
                        sfSound_play(param->sound);
                        param->assets[7].rect = conf_rect(0, 48, 35, 45);
                }
        }
        if (param->isJumping) {
                param->Jumplimit = spacebar(param);
        }
}
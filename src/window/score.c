/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** score
*/
#include "my.h"

void score(params_t *param)
{
    sfFont *font = sfFont_createFromFile("src/assets/font/i.ttf");
    sfText *text = sfText_create();
    sfText_setFont(text, font);
    sfText_setString(text, "0");
    sfText_setCharacterSize(text, 100);
    sfText_setPosition(text, v2f(1650, 0));
    sfText_setString(text, int_to_string(param->score_int));
    sfRenderWindow_drawText(param->window, text, NULL);
}
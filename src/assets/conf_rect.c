/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** conf_rect
*/
#include "my.h"

sfIntRect conf_rect(int top, int left, int width, int height)
{
    sfIntRect rect;

    rect.height = height;
    rect.left = left;
    rect.top = top;
    rect.width = width;

    return rect;
}

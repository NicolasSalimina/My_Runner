/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-nicolas.salimina
** File description:
** my
*/
#include <stdarg.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>

#ifndef MY_H_
#define MY_H_

typedef struct assets
{
    sfIntRect   rect;
    sfVector2f  pos;
    sfTexture   *texture;
    sfSprite    *sprite;
}assets_t;

typedef struct params
{
    assets_t *assets;
    sfEvent event;
    bool    isJumping;
    bool    Jumplimit;
    bool    isGrounded;
    int     speed;
    int count;
    int     score_int;
    int game_over;
    sfRenderWindow *window;
    sfClock     *clock;
    sfClock     *clock2;
    sfMusic     *music;
    sfSound     *sound;
    sfSoundBuffer *buffer;
}params_t;


char *int_to_string(int nbr);

params_t *my_params(void);
sfVector2f v2f(float x, float y);
sfVector2f scale(float x, float y);

void score(params_t *param);

void animation(params_t *param, sfClock *clock, sfClock *clock2);

void window_open(params_t *param);
void window_destroy(params_t *param);
void window_management(params_t *param);

assets_t *init_assets_struct(void);
sfIntRect conf_rect(int top, int left, int width, int height);
assets_t *conf_assets_texture();
void init_assets();
void destroy_assets(params_t *param);

void close_window(sfRenderWindow *window);
void analyse_events(params_t *param, sfEvent event);
bool spacebar(params_t *param);

void position_enemies(params_t *param);
void hurt(params_t *param);


void my_putchar(char c);
int my_put_nbr(int nbr);
int my_putstr(char const *str);
int my_printf_main(char const *str, int i, va_list list);
int my_printf_special(char const *str, int i);
int my_printf(char const *str, ...);


#endif /* !MY_H_ */

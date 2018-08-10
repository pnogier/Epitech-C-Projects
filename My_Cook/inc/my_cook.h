/*
** EPITECH PROJECT, 2017
** My_Hunter
** File description:
** header
*/

#ifndef _HUNTER_H_
#define _HUNTER_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window/Event.h>
#include <stdlib.h>
#include <SFML/Audio.h>

//              Structures              //

typedef struct init_t init_t;

struct init_t {
	sfTexture *home_text;
	sfSprite *home_sprite;
	sfTexture *start_text;
	sfSprite *start_sprite;
	sfTexture *exit_text;
	sfSprite *exit_sprite;
	sfTexture *background_text;
	sfSprite *background_sprite;
	sfTexture *people_text;
	sfSprite *people_sprite;
	sfTexture *menu_back_text;
	sfSprite *menu_back_sprite;
	sfTexture *customers_text;
	sfSprite *customers_sprite;
	sfTexture *square_text;
	sfSprite *square_sprite;
	sfTexture *k_text;
	sfSprite *k_sprite;
	sfTexture *hot_dog_text;
	sfSprite *hot_dog_sprite;
	sfTexture *ketchup_text;
	sfSprite *ketchup_sprite;
	sfTexture *nachos_text;
	sfSprite *nachos_sprite;
	sfTexture *cheese_text;
	sfSprite *cheese_sprite;
	sfTexture *c_text;
	sfSprite *c_sprite;
	sfTexture *e_text;
	sfSprite *e_sprite;
	sfTexture *p_text;
	sfSprite *p_sprite;
	sfTexture *pizza_text;
	sfSprite *pizza_sprite;
	sfTexture *pepperoni_text;
	sfSprite *pepperoni_sprite;
	sfTexture *egg_text;
	sfSprite *egg_sprite;
	sfTexture *ice_cream_text;
	sfSprite *ice_cream_sprite;
	sfTexture *cherry_text;
	sfSprite *cherry_sprite;
	sfMusic *order;
};

//              Functions               //

int my_printf(char const *format, ...);
sfRenderWindow *my_window(unsigned int width, unsigned int height, char *name);
void draw_home(sfRenderWindow *window, init_t *init);
void play_home(sfRenderWindow *window, init_t *init);
void play_game(sfRenderWindow *window, init_t *init);
void play_menu(sfRenderWindow *window, init_t *init);
void cook(sfRenderWindow *window, init_t *init);
void pizza(sfRenderWindow *window, init_t *init);
void ice_cream(sfRenderWindow *window, init_t *init);
void init_texture(init_t *init);
void set_sounds(init_t *init);
void destroy_sprite(init_t *init);
int nachos_event(sfRenderWindow *window, init_t *init, sfEvent event);
int hot_dog_event(sfRenderWindow *window, init_t *init, sfEvent event);
int ice_cream_event(sfRenderWindow *window, init_t *init, sfEvent event);
int pizza_event(sfRenderWindow *window, init_t *init, sfEvent event);

#endif

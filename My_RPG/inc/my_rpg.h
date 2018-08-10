/*
** EPITECH PROJECT, 2017
** My_rpg
** File description:
** header
*/

#ifndef _RPG_H_
#define _RPG_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window/Event.h>
#include <stdlib.h>
#include <SFML/Audio.h>

//		Structures		//

typedef struct s_init {
	sfTexture *junkie_text;
	sfSprite *junkie_sprite;
	sfTexture *map_text;
	sfSprite *map_sprite;
	sfTexture *main_menu_text;
	sfSprite *main_menu_sprite;
	sfTexture *htp_text;
	sfSprite *htp_sprite;
	sfTexture *menu_ig_text;
	sfSprite *menu_ig_sprite;
} t_init;

sfRenderWindow *my_window(unsigned int width, unsigned int height, char *name);
void init_texture(t_init *init);
void loop(sfRenderWindow *window, t_init *init);
void display_game(sfRenderWindow *window, t_init *init);
void move_rect(sfIntRect *rect, int top, int direction, t_init *init);
void set_sprite_junkie(t_init *init);
void destroy(t_init *init, sfRenderWindow *window);
void main_menu(t_init *init, sfRenderWindow *window);
void display_mmenu(sfRenderWindow *window, t_init *init);
void display_htp(sfRenderWindow *window, t_init *init);
void how_tp(t_init *init, sfRenderWindow *window);
int menu_ig(t_init *init, sfRenderWindow *window);
void display_menu_ig(sfRenderWindow *window, t_init *init);

#endif

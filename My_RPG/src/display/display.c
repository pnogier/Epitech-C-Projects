/*
** EPITECH PROJECT, 2018
** display
** File description:
** display
*/

#include "my_rpg.h"

void display_menu_ig(sfRenderWindow *window, t_init *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->map_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->junkie_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->menu_ig_sprite, NULL);
	sfRenderWindow_display(window);
}

void display_htp(sfRenderWindow *window, t_init *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->htp_sprite, NULL);
	sfRenderWindow_display(window);
}

void display_mmenu(sfRenderWindow *window, t_init *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->main_menu_sprite, NULL);
	sfRenderWindow_display(window);
}

void display_game(sfRenderWindow *window, t_init *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->map_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->junkie_sprite, NULL);
	sfRenderWindow_display(window);
}

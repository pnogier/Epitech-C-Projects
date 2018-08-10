/*
** EPITECH PROJECT, 2018
** init_text
** File description:
** 1
*/

#include "my_rpg.h"

void init_texture(t_init *init)
{
	init->junkie_text = sfTexture_createFromFile("assets/junkie/junkie.png", NULL);
	init->junkie_sprite = sfSprite_create();
	sfSprite_setTexture(init->junkie_sprite, init->junkie_text, sfTrue);
	init->map_text = sfTexture_createFromFile("assets/map/map.png", NULL);
	init->map_sprite = sfSprite_create();
	sfSprite_setTexture(init->map_sprite, init->map_text, sfTrue);
	init->main_menu_text = sfTexture_createFromFile("assets/menu.png", NULL);
	init->main_menu_sprite = sfSprite_create();
	sfSprite_setTexture(init->main_menu_sprite, init->main_menu_text, sfTrue);
	init->htp_text = sfTexture_createFromFile("assets/retour.png", NULL);
	init->htp_sprite = sfSprite_create();
	sfSprite_setTexture(init->htp_sprite, init->htp_text, sfTrue);
	init->menu_ig_text = sfTexture_createFromFile("assets/menu_ig.png", NULL);
	init->menu_ig_sprite = sfSprite_create();
	sfSprite_setTexture(init->menu_ig_sprite, init->menu_ig_text, sfTrue);
	set_sprite_junkie(init);
}

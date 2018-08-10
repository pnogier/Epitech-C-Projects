/*
** EPITECH PROJECT, 2018
** set_sprite
** File description:
** rpg
*/

#include "my_rpg.h"

void set_map(t_init *init)
{
	sfVector2f map;
	sfVector2f origin;

	origin.x = 700;
	origin.y = 1600;
	map.x = 2;
	map.y = 2;
	sfSprite_setScale(init->map_sprite, map);
	sfSprite_setOrigin(init->map_sprite, origin);
}

void set_sprite_junkie(t_init *init)
{
	sfVector2f junkie;
	sfIntRect junkie_rect;

	junkie_rect.top = 0;
	junkie_rect.left = 0;
	junkie_rect.width = 65;
	junkie_rect.height = 65;
	junkie.x = 490;
	junkie.y = 300;
	sfSprite_setPosition(init->junkie_sprite, junkie);
	sfSprite_setTextureRect(init->junkie_sprite, junkie_rect);
	set_map(init);
}

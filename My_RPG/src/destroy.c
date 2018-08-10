/*
** EPITECH PROJECT, 2018
** rpg
** File description:
** destroy
*/

#include "my_rpg.h"

void destroy_texture(t_init *init)
{
	sfTexture_destroy(init->junkie_text);
	sfTexture_destroy(init->map_text);
}

void destroy_sprite(t_init *init)
{
	sfSprite_destroy(init->junkie_sprite);
	sfSprite_destroy(init->map_sprite);
}

void destroy(t_init *init, sfRenderWindow *window)
{
	destroy_texture(init);
	destroy_sprite(init);
	sfRenderWindow_destroy(window);
}

/*
** EPITECH PROJECT, 2018
** destroy
** File description:
** 
*/

#include "my_cook.h"

void destroy_audio(init_t *init)
{
	sfMusic_destroy(init->order);
}

void destroy_text2(init_t *init)
{
	sfTexture_destroy(init->pepperoni_text);
	sfTexture_destroy(init->egg_text);
	destroy_audio(init);
}

void destroy_text(init_t *init)
{
	sfTexture_destroy(init->home_text);
	sfTexture_destroy(init->start_text);
	sfTexture_destroy(init->exit_text);
	sfTexture_destroy(init->background_text);
	sfTexture_destroy(init->people_text);
	sfTexture_destroy(init->menu_back_text);
	sfTexture_destroy(init->customers_text);
	sfTexture_destroy(init->square_text);
	sfTexture_destroy(init->k_text);
	sfTexture_destroy(init->hot_dog_text);
	sfTexture_destroy(init->ketchup_text);
	sfTexture_destroy(init->nachos_text);
	sfTexture_destroy(init->cheese_text);
	sfTexture_destroy(init->c_text);
	sfTexture_destroy(init->e_text);
	sfTexture_destroy(init->p_text);
	sfTexture_destroy(init->pizza_text);
	destroy_text2(init);
}

void destroy_sprite2(init_t *init)
{
	sfSprite_destroy(init->pepperoni_sprite);
	sfSprite_destroy(init->egg_sprite);
	destroy_text(init);
}

void destroy_sprite(init_t *init)
{
	sfSprite_destroy(init->home_sprite);
	sfSprite_destroy(init->start_sprite);
	sfSprite_destroy(init->exit_sprite);
	sfSprite_destroy(init->background_sprite);
	sfSprite_destroy(init->people_sprite);
	sfSprite_destroy(init->menu_back_sprite);
	sfSprite_destroy(init->customers_sprite);
	sfSprite_destroy(init->square_sprite);
	sfSprite_destroy(init->k_sprite);
	sfSprite_destroy(init->hot_dog_sprite);
	sfSprite_destroy(init->ketchup_sprite);
	sfSprite_destroy(init->nachos_sprite);
	sfSprite_destroy(init->cheese_sprite);
	sfSprite_destroy(init->c_sprite);
	sfSprite_destroy(init->e_sprite);
	sfSprite_destroy(init->p_sprite);
	sfSprite_destroy(init->pizza_sprite);
	destroy_sprite2(init);
}

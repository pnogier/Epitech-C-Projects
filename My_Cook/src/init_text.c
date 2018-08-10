/*
** EPITECH PROJECT, 2018
** init_text
** File description:
** 
*/

#include "my_cook.h"

void set_sounds(init_t *init)
{
	init->order = sfMusic_createFromFile("sounds/order.wav");
}

void init_text4(init_t *init)
{
	init->egg_text = sfTexture_createFromFile("text/egg.png", NULL);
	init->egg_sprite = sfSprite_create();
	sfSprite_setTexture(init->egg_sprite, init->egg_text, sfTrue);
	init->ice_cream_text = sfTexture_createFromFile("text/ice-cream.png", NULL);
	init->ice_cream_sprite = sfSprite_create();
	sfSprite_setTexture(init->ice_cream_sprite, init->ice_cream_text, sfTrue);
	init->cherry_text = sfTexture_createFromFile("text/ice-creamc.png", NULL);
	init->cherry_sprite = sfSprite_create();
	sfSprite_setTexture(init->cherry_sprite, init->cherry_text, sfTrue);
}

void init_text3(init_t *init)
{
	init->cheese_text = sfTexture_createFromFile("text/nachosc.png", NULL);
	init->cheese_sprite = sfSprite_create();
	sfSprite_setTexture(init->cheese_sprite, init->cheese_text, sfTrue);
	init->c_text = sfTexture_createFromFile("text/c.png", NULL);
	init->c_sprite = sfSprite_create();
	sfSprite_setTexture(init->c_sprite, init->c_text, sfTrue);
	init->e_text = sfTexture_createFromFile("text/e.png", NULL);
	init->e_sprite = sfSprite_create();
	sfSprite_setTexture(init->e_sprite, init->e_text, sfTrue);
	init->p_text = sfTexture_createFromFile("text/p.png", NULL);
	init->p_sprite = sfSprite_create();
	sfSprite_setTexture(init->p_sprite, init->p_text, sfTrue);
	init->pizza_text = sfTexture_createFromFile("text/pizza.png", NULL);
	init->pizza_sprite = sfSprite_create();
	sfSprite_setTexture(init->pizza_sprite, init->pizza_text, sfTrue);
	init->pepperoni_text = sfTexture_createFromFile("text/pepperoni.png", NULL);
	init->pepperoni_sprite = sfSprite_create();
	sfSprite_setTexture(init->pepperoni_sprite, init->pepperoni_text, sfTrue);
	init_text4(init);
}

void init_text2(init_t *init)
{
	init->customers_text = sfTexture_createFromFile("text/people.png", NULL);
	init->customers_sprite = sfSprite_create();
	sfSprite_setTexture(init->customers_sprite, init->customers_text, sfTrue);
	init->square_text = sfTexture_createFromFile("text/square.png", NULL);
	init->square_sprite = sfSprite_create();
	sfSprite_setTexture(init->square_sprite, init->square_text, sfTrue);
	init->k_text = sfTexture_createFromFile("text/k.png", NULL);
	init->k_sprite = sfSprite_create();
	sfSprite_setTexture(init->k_sprite, init->k_text, sfTrue);
	init->hot_dog_text = sfTexture_createFromFile("text/hot-dog.png", NULL);
	init->hot_dog_sprite = sfSprite_create();
	sfSprite_setTexture(init->hot_dog_sprite, init->hot_dog_text, sfTrue);
	init->ketchup_text = sfTexture_createFromFile("text/hot-dog-k.png", NULL);
	init->ketchup_sprite = sfSprite_create();
	sfSprite_setTexture(init->ketchup_sprite, init->ketchup_text, sfTrue);
	init->nachos_text = sfTexture_createFromFile("text/nachos.png", NULL);
	init->nachos_sprite = sfSprite_create();
	sfSprite_setTexture(init->nachos_sprite, init->nachos_text, sfTrue);
	init_text3(init);
}

void init_texture(init_t *init)
{
	init->home_text = sfTexture_createFromFile("text/home.png", NULL);
	init->home_sprite = sfSprite_create();
	sfSprite_setTexture(init->home_sprite, init->home_text, sfTrue);
	init->start_text = sfTexture_createFromFile("text/start.png", NULL);
	init->start_sprite = sfSprite_create();
	sfSprite_setTexture(init->start_sprite, init->start_text, sfTrue);
	init->exit_text = sfTexture_createFromFile("text/exit.png", NULL);
	init->exit_sprite = sfSprite_create();
	sfSprite_setTexture(init->exit_sprite, init->exit_text, sfTrue);
	init->background_text = sfTexture_createFromFile("text/background.png", NULL);
	init->background_sprite = sfSprite_create();
	sfSprite_setTexture(init->background_sprite, init->background_text, sfTrue);
	init->people_text = sfTexture_createFromFile("text/people.png", NULL);
	init->people_sprite = sfSprite_create();
	sfSprite_setTexture(init->people_sprite, init->people_text, sfTrue);
	init->menu_back_text = sfTexture_createFromFile("text/menu_back.png", NULL);
	init->menu_back_sprite = sfSprite_create();
	sfSprite_setTexture(init->menu_back_sprite, init->menu_back_text, sfTrue);
	init_text2(init);
}

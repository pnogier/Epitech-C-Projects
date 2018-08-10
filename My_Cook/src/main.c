/*
** EPITECH PROJECT, 2018
** main
** File description:
** 
*/

#include "my_cook.h"

void draw_home(sfRenderWindow *window, init_t *init)
{
	sfVector2f start;
	sfVector2f exit;

	start.x = 100;
	start.y = 120;
	exit.x = 100;
	exit.y = 320;
	sfSprite_setPosition(init->start_sprite, start);
	sfSprite_setPosition(init->exit_sprite, exit);
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->home_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->start_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->exit_sprite, NULL);
	sfRenderWindow_display(window);
}

void set_sprite2(init_t *init)
{
	sfVector2f k;
	sfIntRect rect;

	k.x = 785;
	k.y = 140;

	rect.top = 0;
	rect.left = 0;
	rect.width = 155;
	rect.height = 240;
	sfSprite_setTextureRect(init->customers_sprite, rect);
	sfSprite_setPosition(init->k_sprite, k);
	sfSprite_setPosition(init->c_sprite, k);
	sfSprite_setPosition(init->p_sprite, k);
	k.y = 220;
	sfSprite_setPosition(init->e_sprite, k);
}

void set_sprite(init_t *init)
{
	sfVector2f customers;
	sfVector2f square;
	sfVector2f hot_dog;

	hot_dog.x = 200;
	hot_dog.y = 150;
	square.x = 768;
	square.y = 100;
	customers.x = -155;
	customers.y = 235;
	sfSprite_setPosition(init->customers_sprite, customers);
	sfSprite_setPosition(init->square_sprite, square);
	sfSprite_setPosition(init->hot_dog_sprite, hot_dog);
	sfSprite_setPosition(init->ketchup_sprite, hot_dog);
	sfSprite_setPosition(init->nachos_sprite, hot_dog);
	sfSprite_setPosition(init->cheese_sprite, hot_dog);
	sfSprite_setPosition(init->pizza_sprite, hot_dog);
	sfSprite_setPosition(init->pepperoni_sprite, hot_dog);
	sfSprite_setPosition(init->egg_sprite, hot_dog);
}

sfRenderWindow *my_window(unsigned int width, unsigned int height, char *name)
{
	sfRenderWindow *window;
	sfVideoMode video_mode;

	video_mode.width = width;
	video_mode.height = height;
	video_mode.bitsPerPixel = 32;
	window = sfRenderWindow_create(video_mode, name, sfResize | sfClose, NULL);
	return (window);
}

int main(int ac, char **av)
{
	sfRenderWindow *window;
	init_t init;

	if (ac != 1 && av[1] == NULL)
		return (84);
	window = my_window(1024, 576, "My_Cook");
	init_texture(&init);
	set_sprite(&init);
	set_sprite2(&init);
	set_sounds(&init);
	play_home(window, &init);
	destroy_sprite(&init);
	sfRenderWindow_destroy(window);
	return (0);
}

/*
** EPITECH PROJECT, 2017
** cook
** File description:
**
*/

#include "my_cook.h"

void draw_hd(sfRenderWindow *window, init_t *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->background_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->square_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->customers_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->k_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->hot_dog_sprite, NULL);
	sfRenderWindow_display(window);
}

void hot_dog(sfRenderWindow *window, init_t *init)
{
	int k = 0;
	int close = 0;
	int enter = 0;
	sfEvent event;

	draw_hd(window, init);
	while (k == 0 || enter == 0) {
		while (sfRenderWindow_pollEvent(window, &event))
			close = hot_dog_event(window, init, event);
		if (close == -1)
			break;
		if (close == 1)
			k++;
		if (close == 2)
			enter++;
	}
}

void draw_nachos(sfRenderWindow *window, init_t *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->background_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->square_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->customers_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->c_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->nachos_sprite, NULL);
	sfRenderWindow_display(window);
}

void nachos(sfRenderWindow *window, init_t *init)
{
	int c = 0;
	int close = 0;
	int enter = 0;
	sfEvent event;

	draw_nachos(window, init);
	while (c == 0 || enter == 0) {
		while (sfRenderWindow_pollEvent(window, &event))
			close = nachos_event(window, init, event);
		if (close == -1)
			break;
		if (close == 1)
			c++;
		if (close == 2)
			enter++;
	}
}

void cook(sfRenderWindow *window, init_t *init)
{
	int food = rand();

	food = food % 4;
	sfMusic_play(init->order);
	if (food == 0)
		hot_dog(window, init);
	if (food == 1)
		nachos(window, init);
	if (food == 2)
		pizza(window, init);
	if (food == 3)
		ice_cream(window, init);
}

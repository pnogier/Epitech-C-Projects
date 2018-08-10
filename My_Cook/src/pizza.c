/*
** EPITECH PROJECT, 2017
** pizza
** File description:
**
*/

#include "my_cook.h"

void draw_ice_cream(sfRenderWindow *window, init_t *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->background_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->square_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->customers_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->c_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->ice_cream_sprite, NULL);
	sfRenderWindow_display(window);
}

void ice_cream(sfRenderWindow *window, init_t *init)
{
	int c = 0;
	int close = 0;
	int enter = 0;
	sfEvent event;

	draw_ice_cream(window, init);
	while (c == 0 || enter == 0) {
		while (sfRenderWindow_pollEvent(window, &event))
			close = ice_cream_event(window, init, event);
		if (close == -1)
			break;
		if (close == 1)
			c++;
		if (close == 2)
			enter++;
	}
}

void draw_pizza(sfRenderWindow *window, init_t *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->background_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->square_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->customers_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->p_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->e_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->pizza_sprite, NULL);
	sfRenderWindow_display(window);
}

void pizza(sfRenderWindow *window, init_t *init)
{
	int p = 0;
	int close = 0;
	int enter = 0;
	sfEvent event;

	draw_pizza(window, init);
	while (p == 0 || enter == 0) {
		while (sfRenderWindow_pollEvent(window, &event))
		close = pizza_event(window, init , event);
		if (close == -1)
			break;
		if (close == 1)
			p++;
		if (close == 2)
			enter++;
	}
}

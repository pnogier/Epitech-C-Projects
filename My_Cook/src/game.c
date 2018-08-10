/*
** EPITECH PROJECT, 2018
** game
** File description:
**
*/

#include "my_cook.h"

void draw_game(sfRenderWindow *window, init_t *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->background_sprite, NULL);
	sfRenderWindow_drawSprite(window, init->customers_sprite, NULL);
	sfRenderWindow_display(window);
}

void move_rect(sfIntRect *rect, int offset, int max_value, init_t *init)
{
	sfVector2f reset;

	reset.x = 0;
	reset.y = 235;
	reset.x = reset.x - rect->left;
	sfSprite_setPosition(init->customers_sprite, reset);
	if (rect->left + offset == max_value)
		rect->left = 0;
	else
		rect->left = rect->left + offset;
}

int move_customers(sfRenderWindow *window, init_t *init, int max, sfIntRect *rect)
{
	sfVector2f mvc;
	sfVector2f pos;
	sfEvent event;
	int close = 0;

	mvc.x = 3;
	mvc.y = 0;
	pos = sfSprite_getPosition(init->customers_sprite);
	while (pos.x < max){
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (event.type == sfEvtClosed) {
				sfRenderWindow_close(window);
				close = 1;
			} else if (event.key.code == sfKeyEscape)
				play_menu(window, init);
		}
		sfSprite_move(init->customers_sprite, mvc);
		draw_game(window, init);
		pos = sfSprite_getPosition(init->customers_sprite);
	}
	if (close == 1)
		return (1);
	if (pos.x >= 900)
		move_rect(rect, 160, 1600, init);
	return (0);
}

void play_game(sfRenderWindow *window, init_t *init)
{
	sfEvent event;
	sfIntRect rect;

	rect.top = 0;
	rect.left = 0;
	rect.width = 160;
	rect.height = 240;
	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
			else if (event.key.code == sfKeyEscape)
				play_menu(window, init);
		}
		if (move_customers(window, init, 450, &rect) == 1)
			break;
		cook(window, init);
		if (move_customers(window, init, 900, &rect) == 1)
			break;
		sfSprite_setTextureRect(init->customers_sprite, rect);
		draw_game(window, init);
	}
}

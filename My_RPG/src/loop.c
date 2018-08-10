/*
** EPITECH PROJECT, 2018
** loop
** File description:
** gmae
*/

#include "my_rpg.h"

void test_event(sfEvent event, sfRenderWindow *window, sfIntRect *rect, t_init *init)
{
	if (event.type == sfEvtClosed)
		sfRenderWindow_close(window);
	else if (event.type == sfEvtKeyPressed) {
		if (event.key.code == sfKeyDown)
			move_rect(rect, 0, 0, init);
		if (event.key.code == sfKeyUp)
			move_rect(rect, 65, 1, init);
		if (event.key.code == sfKeyLeft)
			move_rect(rect, 130, 3, init);
		if (event.key.code == sfKeyRight)
			move_rect(rect, 195, 2, init);
		if (event.key.code == sfKeyEscape)
			menu_ig(init, window);
		}
}

void loop(sfRenderWindow *window, t_init *init)
{
	sfEvent event;
	sfIntRect rect;

	rect.top = 0;
	rect.left = 0;
	rect.width = 65;
	rect.height = 65;
	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event))
			test_event(event, window, &rect, init);
		sfSprite_setTextureRect(init->junkie_sprite, rect);
		display_game(window, init);
	}
}

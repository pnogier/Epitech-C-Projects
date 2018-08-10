/*
** EPITECH PROJECT, 2018
** main menu
** File description:
** rpg
*/

#include "my_rpg.h"

int test_event_menu(sfEvent event, sfRenderWindow *window)
{
	sfVector2i pos_mouse;

	if (event.type == sfEvtClosed)
		sfRenderWindow_close(window);
	if (event.type == sfEvtMouseButtonPressed) {
		pos_mouse = sfMouse_getPositionRenderWindow(window);
		if (140 <= pos_mouse.x && pos_mouse.x <= 340 && \
			500 <= pos_mouse.y && pos_mouse.y <= 543)
			return (1);
		else if (728 <= pos_mouse.x && pos_mouse.x <= 928 && \
			500 <= pos_mouse.y && pos_mouse.y <= 543)
			return (-1);
		else if (445 <= pos_mouse.x && pos_mouse.x <= 645 && \
			500 <= pos_mouse.y && pos_mouse.y <= 543)
			return (2);
	}
	return (0);
}

void main_menu(t_init *init, sfRenderWindow *window)
{
	sfEvent event;
	int button;

	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event))
				button = test_event_menu(event,window);
		if (button == 1)
			loop(window, init);
		else if (button == -1)
			sfRenderWindow_close(window);
		else if (button == 2)
			how_tp(init, window);
		else
			display_mmenu(window, init);
	}
}

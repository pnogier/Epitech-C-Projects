/*
** EPITECH PROJECT, 2018
** how to play
** File description:
** rpg
*/

#include "my_rpg.h"

int test_event_htp(sfEvent event, sfRenderWindow *window)
{
	sfVector2i pos_mouse;

	if (event.type == sfEvtClosed)
		sfRenderWindow_close(window);
	if (event.type == sfEvtMouseButtonPressed) {
		pos_mouse = sfMouse_getPositionRenderWindow(window);
		if (728 <= pos_mouse.x && pos_mouse.x <= 928 && \
			500 <= pos_mouse.y && pos_mouse.y <= 543)
			return (-1);
		}
	return (0);
}

void how_tp(t_init *init, sfRenderWindow *window)
{
	sfEvent event;
	int button;

	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event))
				button = test_event_htp(event,window);
		if (button == -1)
			main_menu(init, window);
		else
			display_htp(window, init);
	}
}

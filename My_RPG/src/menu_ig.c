/*
** EPITECH PROJECT, 2018
** menu in game
** File description:
** rpg
*/

#include "my_rpg.h"

int test_event_menu_ig(sfEvent event, sfRenderWindow *window)
{
	sfVector2i pos_mouse;

	if (event.type == sfEvtClosed)
		sfRenderWindow_close(window);
	if (event.type == sfEvtMouseButtonPressed) {
		pos_mouse = sfMouse_getPositionRenderWindow(window);
		if (38 <= pos_mouse.x && pos_mouse.x <= 172 && \
			225 <= pos_mouse.y && pos_mouse.y <= 255)
			return (1);
		else if (38 <= pos_mouse.x && pos_mouse.x <= 172 && \
			295 <= pos_mouse.y && pos_mouse.y <= 325)
			return (-1);
		else if (340 <= pos_mouse.x && pos_mouse.x <= 572 && \
			257 <= pos_mouse.y && pos_mouse.y <= 291)
			return (2);
	}
	return (0);
}

int menu_ig(t_init *init, sfRenderWindow *window)
{
	sfEvent event;
	int button;

	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event))
				button = test_event_menu_ig(event,window);
		if (button == 1 || button == 3)
			return (0);
		else if (button == -1)
			sfRenderWindow_close(window);
		else if (button == 2)
			main_menu(init, window);
		else
			display_menu_ig(window, init);
	}
	return (0);
}

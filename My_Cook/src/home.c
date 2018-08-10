/*
** EPITECH PROJECT, 2018
** home
** File description:
** 
*/

#include "my_cook.h"

int click(sfRenderWindow *window)
{
	sfVector2i pos_mouse;

	pos_mouse = sfMouse_getPositionRenderWindow(window);
	if (100 <= pos_mouse.x && pos_mouse.x <= 420 && \
		120 <= pos_mouse.y && pos_mouse.y <= 308)
		return (1);
	else if (100 <= pos_mouse.x && pos_mouse.x <= 420 && \
		320 <= pos_mouse.y && pos_mouse.y <= 508)
		return (-1);
	else
		return (0);
}

void play_home(sfRenderWindow *window, init_t *init)
{
	sfEvent event;
	int button = 0;

	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
			else if (event.type == sfEvtMouseButtonPressed)
				button = click(window);
		}
		if (button == 1)
			break;
		else if (button == -1)
			sfRenderWindow_close(window);
		else
			draw_home(window, init);
		}
	play_game(window, init);
}

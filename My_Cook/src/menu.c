/*
** EPITECH PROJECT, 2018
** menu
** File description:
**
*/

#include "my_cook.h"

int click_menu(sfRenderWindow *window)
{
	sfVector2i pos_mouse;

	pos_mouse = sfMouse_getPositionRenderWindow(window);
	if (320 <= pos_mouse.x && pos_mouse.x <= 692 && \
		245 <= pos_mouse.y && pos_mouse.y <= 312)
		return (1);
	else if (320 <= pos_mouse.x && pos_mouse.x <= 692 && \
		330 <= pos_mouse.y && pos_mouse.y <= 508)
		return (-1);
	else
		return (0);
}

void draw_menu(sfRenderWindow *window, init_t *init)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, init->menu_back_sprite, NULL);
	sfRenderWindow_display(window);
}

void play_menu(sfRenderWindow *window, init_t *init)
{
	sfEvent event;
	int button;

	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
			if (event.type == sfEvtMouseButtonPressed)
				button = click_menu(window);
			if (event.key.code == sfKeyEscape)
				button = 2;
		}
		if (button == 1)
			play_home(window, init);
		if (button == -1)
			sfRenderWindow_close(window);
		if (button == 2)
			break;
		else
			draw_menu(window, init);
	}
}

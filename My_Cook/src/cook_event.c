/*
** EPITECH PROJECT, 2017
** cook_event
** File description:
**
*/

#include "my_cook.h"

int pizza_event(sfRenderWindow *window, init_t *init, sfEvent event)
{
	if (event.type == sfEvtClosed) {
		sfRenderWindow_close(window);
		return (-1);
	}
	if (event.key.code == sfKeyEscape)
		play_menu(window, init);
	if (event.key.code == sfKeyP) {
		sfRenderWindow_drawSprite(window, init->pepperoni_sprite, NULL);
		sfRenderWindow_display(window);
		return (1);
	}
	if (event.key.code == sfKeyE) {
		sfRenderWindow_drawSprite(window, init->egg_sprite, NULL);
		sfRenderWindow_display(window);
		return (3);
	}
	if (event.key.code == sfKeyReturn)
		return(2);
	return (0);
}

int ice_cream_event(sfRenderWindow *window, init_t *init, sfEvent event)
{
	if (event.type == sfEvtClosed) {
		sfRenderWindow_close(window);
		return (-1);
	}
	if (event.key.code == sfKeyEscape)
		play_menu(window, init);
	if (event.key.code == sfKeyC) {
		sfRenderWindow_drawSprite(window, init->cherry_sprite, NULL);
		sfRenderWindow_display(window);
		return (1);
	}
	if (event.key.code == sfKeyReturn)
		return(2);
	return (0);
}

int hot_dog_event(sfRenderWindow *window, init_t *init, sfEvent event)
{
	if (event.type == sfEvtClosed) {
		sfRenderWindow_close(window);
		return (-1);
	}
	if (event.key.code == sfKeyEscape)
		play_menu(window, init);
	if (event.key.code == sfKeyK) {
		sfRenderWindow_drawSprite(window, init->ketchup_sprite, NULL);
		sfRenderWindow_display(window);
		return (1);
	}
	if (event.key.code == sfKeyReturn)
		return(2);
	return (0);
}

int nachos_event(sfRenderWindow *window, init_t *init, sfEvent event)
{
	if (event.type == sfEvtClosed) {
		sfRenderWindow_close(window);
		return (-1);
	}
	if (event.key.code == sfKeyEscape)
		play_menu(window, init);
	if (event.key.code == sfKeyC) {
		sfRenderWindow_drawSprite(window, init->cheese_sprite, NULL);
		sfRenderWindow_display(window);
		return (1);
	}
	if (event.key.code == sfKeyReturn)
		return(2);
	return (0);
}

/*
** EPITECH PROJECT, 2018
** player
** File description:
** move
*/

#include "my_rpg.h"

void move_map(t_init *init, int direction)
{
	sfVector2f move;

	switch (direction) {
		case 0:
			move.x = 0;
			move.y = -5;
			break;
		case 1:
			move.x = 0;
			move.y = 5;
			break;
		case 2:
			move.x = -5;
			move.y = 0;
			break;
		case 3:
			move.x = 5;
			move.y = 0;
			break;
	}
	sfSprite_move(init->map_sprite, move);
}

void move_rect(sfIntRect *rect, int top, int direction, t_init *init)
{
	rect->top = top;
	if (rect->left + 50 >= 450)
		rect->left = 0;
	else
		rect->left = rect->left + 50;
	move_map(init, direction);
}

/*
** EPITECH PROJECT, 2018
** window
** File description:
** window
*/

#include "my_rpg.h"

sfRenderWindow *my_window(unsigned int width, unsigned int height, char *name)
{
	sfRenderWindow *window;
	sfVideoMode video_mode;

	video_mode.width = width;
	video_mode.height = height;
	video_mode.bitsPerPixel = 32;
	window = sfRenderWindow_create(video_mode, name, sfResize | sfClose, NULL);
	return (window);
}

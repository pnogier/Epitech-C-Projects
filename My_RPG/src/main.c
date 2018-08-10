/*
** EPITECH PROJECT, 2018
** Rpg
** File description:
** main
*/

#include "my_rpg.h"
#include <stdio.h>

int main(int ac, char **av)
{
	sfRenderWindow *window;
	t_init init;
//	tmx_map *map = tmx_load("assets/map/test.tmx");
//	tmx_tile *tileset;

	if (ac != 1 && av[1] == NULL)
		return (84);
	window = my_window(1024, 600, "LA Memoire de Johnny");
	init_texture(&init);
	main_menu(&init, window);
	destroy(&init, window);
//	tmx_map_free(map);
	return (0);
}

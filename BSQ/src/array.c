/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** array
*/

#include "bsq.h"

void display_2d_map(char **map_2d, map_infos map_infos)
{
	int i = 0;

	while (i < map_infos.lines) {
		write(1, map_2d[i], map_infos.columns);
		my_printf("\n");
		i = i + 1;
	}
}

void put_map_in_2d_array(char **map_2d, char *map, map_infos map_infos)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (map[k] != '\n' && map[k] != '\0') {
		k = k + 1;
	}
	k = k + 1;
	while (i < map_infos.lines) {
		while (map[k] != '\n' && map[k] != '\0') {
			map_2d[i][j] = map[k];
			k = k + 1;
			j = j + 1;
		}
		map_2d[i][j] = '\0';
		j = 0;
		k = k + 1;
		i = i + 1;
	}
}

/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** map
*/

#include "bsq.h"

int nbr_line(char *map)
{
	int i = 0;
	int nbr_line = -1;

	while (map[i] != '\0') {
		if (map[i] == '\n')
			nbr_line = nbr_line + 1;
		i = i + 1;
	}
	return (nbr_line);
}

int nbr_column(char *map)
{
	int i = 1;
	int f = 0;
	int j = 0;

	while (i > 0 && map[f] != '\0') {
		if (map[f] == '\n')
			i = i - 1;
		f = f + 1;
	}
	j = f;
	while (map[j] != '\n' && map[j] != '\0') {
		j = j + 1;
	}
	return (j - f);
}

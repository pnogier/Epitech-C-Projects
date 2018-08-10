/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** square
*/

#include "bsq.h"

void first_square(bsq *bsq)
{
	bsq->pos_x = 0;
	bsq->pos_y = 0;
	bsq->size = 1;
	bsq->tmp_x = 0;
	bsq->tmp_y = 0;
	bsq->tmp_size = 0;
}

int check_square_fitting(char **map_2d, int x, int y, size_t size)
{
	int max_length = x + size;
	int max_height = y + size;
	int tmp_x = x;

	while (y < max_height) {
		if (map_2d[y] == NULL)
			return (-1);
		while (x < max_length) {
			if (map_2d[y][x] == '.')
				x = x + 1;
			else
				return (-1);
		}
		x = tmp_x;
		y = y + 1;
	}
	return (1);
}

void find_bsq(char **map_2d, map_infos map_infos, bsq *bsq)
{
	while (bsq->pos_y < map_infos.lines) {
		while (bsq->pos_x < map_infos.columns) {
			while (check_square_fitting(map_2d, bsq->pos_x, \
				bsq->pos_y, bsq->size) == 1) {
					bsq->tmp_size = bsq->size;
					bsq->tmp_x = bsq->pos_x;
					bsq->tmp_y = bsq->pos_y;
					bsq->size = bsq->size + 1;
			}
			bsq->pos_x = bsq->pos_x + 1;
		}
		bsq->pos_x = 0;
		bsq->pos_y = bsq->pos_y + 1;
	}
	place_bsq_in_map(map_2d, bsq->tmp_x, bsq->tmp_y, bsq->tmp_size);
}

void place_bsq_in_map(char **map_2d, int biggest_x, int biggest_y, \
	size_t biggest_size)
{
	int x = biggest_x;
	int y = biggest_y;
	int size = biggest_size;

	while (y < size + biggest_y) {
		while (x < size + biggest_x) {
			map_2d[y][x] = 'x';
			x = x + 1;
		}
		x = biggest_x;
		y = y + 1;
	}
}

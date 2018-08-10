/*
** EPITECH PROJECT, 2017
** HEADER
** File description:
** header
*/

#ifndef _BSQ_H_
#define _BSQ_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// Structures
// ===============

typedef struct map_infos map_infos;
struct map_infos
{
        int lines;
        int columns;
};

typedef struct bsq bsq;
struct bsq
{
        int pos_x;
        int pos_y;
        int tmp_x;
        int tmp_y;
        size_t size;
        size_t tmp_size;
};

// Functions
// ===============
int my_printf(char const *format, ...);
int my_strlen(char const *str);
int nbr_line(char *map);
int nbr_column(char *map);
void put_map_in_2d_array(char **map_2d, char *map, map_infos map_infos);
void display_2d_map(char **map_2d, map_infos map_infos);
void first_square(bsq *bsq);
void find_bsq(char **map_2d, map_infos map_infos, bsq *bsq);
int check_square_fitting(char **map_2d, int length, int height, size_t size);
void place_bsq_in_map(char **map_2d, int biggest_x, int biggest_y, size_t biggest_size);
#endif

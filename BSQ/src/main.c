/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** main
*/

#include "bsq.h"

int begin_bsq(char *map, char *path_error)
{
	int i = 0;
	char **map_2d;
	map_infos map_infos;
	bsq bsq;

	map_infos.lines = nbr_line(map);
	map_infos.columns = nbr_column(map);
	if (map_infos.lines == 0) {
		my_printf("There is no map in the file: %s\n", path_error);
		exit(84);
	}
	map_2d = malloc(sizeof(char *) * (map_infos.lines + 1));
	while (i < map_infos.lines) {
		map_2d[i] = malloc(sizeof(char) * (map_infos.columns + 1));
		i = i + 1;
	}
	put_map_in_2d_array(map_2d, map, map_infos);
	first_square(&bsq);
	find_bsq(map_2d, map_infos, &bsq);
	display_2d_map(map_2d, map_infos);
	return (0);
}

void check_error(int argc)
{
	if (argc != 2) {
		my_printf("USAGE:\n");
		my_printf("\t./bsq [FILE]\n");
		exit(84);
	}
}

int main(int argc, char **argv)
{
	int fd;
	struct stat sb;
	char *map;

	check_error(argc);
	stat(argv[1], &sb);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		my_printf("Can't find the file: %s\n", argv[1]);
		exit(84);
	}
	if ((map = malloc(sizeof(char) * (sb.st_size + 1))) == NULL)
		exit(84);
	if ((read(fd, map, sb.st_size) != sb.st_size))
		exit(84);
	if (map[0] != 0)
		begin_bsq(map, argv[1]);
	return (0);
}

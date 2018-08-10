/*
** EPITECH PROJECT, 2017
** GetNextLine
** File description:
** get_next_line
*/

#include "include/get_next_line.h"
#include <string.h>

static char *my_realloc(char *line, int len)
{
	char *new_line;
	int i = 0;

	if ((new_line = malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (line[i] != '\0') {
		new_line[i] = line[i];
		i = i + 1;
	}
	free(line);
	return (new_line);
}

int new_line(char **line, int i)
{
	(*line)[i] = '\0';
	if (((*line) = my_realloc((*line), READ_SIZE + i)) == NULL)
		return (1);
	return (0);
}

char *get_next_line(int fd)
{
	static int pos = 0;
	static int tmp = 0;
	int i = 0;
	static char buffer[READ_SIZE];
	char *line;

	if ((line = malloc(sizeof(char) * (READ_SIZE) + 1)) == NULL)
		return (NULL);
	if (tmp == 0 && (tmp = read(fd, buffer, READ_SIZE)) != 0)
		pos = 0;
	if (tmp == -1 || tmp == 0) {
		free(line);
		return (NULL);
	}
	while (buffer[pos] != '\n' && buffer[pos] != '\0') {
		line[i] = buffer[pos];
		i = i + 1;
		pos = pos + 1;
		tmp = tmp - 1;
		if (tmp == 0 && (tmp = read(fd, buffer, READ_SIZE)))
			if ((pos = new_line(&line, i)) == 1)
				return (NULL);
	}
	line[i] = '\0';
	pos = pos + 1;
	tmp = tmp - 1;
	return (line);
}

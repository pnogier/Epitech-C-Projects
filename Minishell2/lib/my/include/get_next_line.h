/*
** EPITECH PROJECT, 2017
** GetNextLine
** File description:
** Header
*/

#ifndef READ_SIZE
#define READ_SIZE (1)
#endif

#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*get_next_line(int fd);

#endif

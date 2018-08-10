/*
** EPITECH PROJECT, 2017
** LIB
** File description:
** strcpy
*/

#include "include/my.h"

char *my_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0') {
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

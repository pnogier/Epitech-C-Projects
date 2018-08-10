/*
** EPITECH PROJECT, 2017
** Lib
** File description:
** my_str_to_wordtab
*/

#include "include/my.h"

char **wordtab_alloc(char *str, char split)
{
	int pos = 0;
	int size = 0;
	char **wordtab = 0;

	for (int i = 0; str[i] != 0; i = i + 1) {
		if (str[i] == split)
			pos = pos + 1;
	}
	wordtab = malloc(sizeof(char *) * (pos + 2));
	pos = 0;
	for (int i = 0; str[i] != 0; i = i + 1) {
		if (str[i] == split) {
			wordtab[pos] = malloc(sizeof(char) * size + 1);
			pos = pos + 1;
			size = 0;
			continue;
		}
		size = size + 1;
	}
	wordtab[pos] = malloc(sizeof(char) * size + 1);
	wordtab[pos + 1] = 0;
	return (wordtab);
}

char **my_str_to_wordtab(char *str, char split)
{
	int pos = 0;
	int size = 0;
	char **wordtab = wordtab_alloc(str, split);

	if (!str[0]) {
		wordtab[0] = 0;
		return (wordtab);
	}
	for (int i = 0; str[i] != 0; i = i + 1) {
		if (str[i] == split) {
			wordtab[pos][size] = 0;
			pos = pos + 1;
			size = 0;
			continue;
		}
		wordtab[pos][size] = str[i];
		size = size + 1;
	}
	wordtab[pos][size] = 0;
	return (wordtab);
}

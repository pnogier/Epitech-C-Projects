/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i]) {
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}

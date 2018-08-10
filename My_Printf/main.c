/*
** EPITECH PROJECT, 2017
** functions
** File description:
** putfncts
*/

#include "include/my.h"

int main()
{
	char *a = "abc";
	char c = 's';
	unsigned int x = -4294967295;
	int b = 19;
	int d = 317547;
	int z = 43;
	int e = -43;
	char str[5] = {'t', 'o', 't', 'o'};
	str[1] = 6;

	my_printf("%p\n%S\n", b, str);
	printf("%p\n", b);
	return (0);
}

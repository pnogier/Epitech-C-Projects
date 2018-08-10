/*
** EPITECH PROJECT, 2017
** Bootstrap my_printf
** File description:
** sum_stdarg
*/

#include "include/my.h"

int sum_stdarg(int i, int nb, ...)
{
	int j = 0;
	int sum;
	va_list ap;

	if (i == 0) {
		va_start(ap, nb);
		while (j < nb) {
			sum = sum + va_arg(ap, int);
			j = j + 1;
		}
		va_end(ap);
	}
	else if (i == 1) {
		va_start(ap, nb);
		while (j < nb) {
			sum = sum + my_strlen(va_arg(ap, char *));
			j = j + 1;
		}
		va_end(ap);
	}
	return (sum);
}

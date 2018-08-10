/*
** EPITECH PROJECT, 2017
** My_printf
** File description:
** my_printf
*/

#include "include/my.h"

int my_printf(char const *format, ...)
{
	int i = 0;
	char *s;
	va_list ap;
	s = malloc(my_strlen(format));

	va_start(ap, format);
	while (format[i] != '\0') {
		if (format[i] == '%') {
			s[0] = format[i + 1];
			disp_stdarg(s, ap);
			i = i + 2;
		} else {
			my_putchar(format[i]);
			i = i + 1;
		}
	}
	va_end(ap);
	return (0);
}

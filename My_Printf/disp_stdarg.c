/*
** EPITECH PROJECT, 2017
** Bootstrap my_printf
** File description:
** disp_stdarg
*/

#include "include/my.h"

int disp_stdarg(char *s, va_list ap)
{
	switch (*s) {
		case 'c':
			my_putchar(va_arg(ap, int));
			break;
		case 'i':
		case 'd':
			my_put_nbr(va_arg(ap, int));
			break;
		case 'u':
			my_put_unsigned_int(va_arg(ap, unsigned int));
			break;
		case 's':
			my_putstr(va_arg(ap, char *));
			break;
		case 'S':
			my_putstr_S(va_arg(ap, char *));
			break;
		case 'X':
			my_put_hex(va_arg(ap, int));
			break;
		case 'p':
			my_putstr("0x");
			my_put_adr(va_arg(ap, unsigned long int));
			break;
		case 'x':
			my_put_lowerhex(va_arg(ap, int));
			break;
		case 'o':
			my_put_octal(va_arg(ap, int));
			break;
		case 'b':
			my_put_binary(va_arg(ap, int));
			break;
		case '%':
			my_putchar('%');
			break;
		}
		return (0);
}

/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** myoutnbr
*/

#include "include/my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_put_special_str(char const *str)
{
	while (*str != '\0') {
		if (*str < 32 || *str >= 127) {
			my_putchar('\\');
			my_put_octal(*str);
			str = str + 1;
		} else {
			my_putchar(*str);
			str = str + 1;
		}
	}
	return (1);
}

int my_putstr(char const *str)
{
	while (*str != '\0') {
		my_putchar(*str);
		str = str + 1;
	}
	return (1);
}

int my_put_nbr(int nb)
{
	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb >= 10) {
		my_put_nbr(nb / 10);
	}
	my_putchar(nb % 10 + 48);
	return (0);
}

int my_put_unsigned_int(unsigned int nb)
{
	if (nb >= 10) {
		my_put_unsigned_int(nb / 10);
		my_put_unsigned_int(nb % 10);
	} else {
		my_putchar(nb + 48);
	}
	return (0);
}

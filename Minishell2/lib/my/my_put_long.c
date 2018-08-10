/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** myoutnbr
*/

#include "include/my.h"

int my_put_long(long nb)
{
	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb >= 10) {
		my_put_long(nb / 10);
	}
	my_putchar(nb % 10 + 48);
	return (0);
}

int my_put_long_long(long long nb)
{
	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb >= 10) {
		my_put_long_long(nb / 10);
	}
	my_putchar(nb % 10 + 48);
	return (0);
}

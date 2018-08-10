/*
** EPITECH PROJECT, 2017
** functions
** File description:
** putfncts
*/

#include "include/my.h"

int my_put_binary(int nb)
{
	int i = 0;
	int result;
	char binary[2] = "01";
	char *buffer;

	buffer = malloc(my_strlen(binary));
	while (nb >= 1) {
		result = nb % 2;
		buffer[i] = binary[result];
		nb = nb / 2;
		i = i + 1;
	}
	buffer[i] = binary[nb];
	my_revstr(buffer);
	my_putstr(buffer);
	return (0);
}

int my_put_octal(int nb)
{
	int i = 0;
	int result;
	char octal[8] = "01234567";
	char *buffer;

	buffer = malloc(my_strlen(octal));
	while (nb >= 8) {
		result = nb % 8;
		buffer[i] = octal[result];
		nb = nb / 8;
		i = i + 1;
	}
	buffer[i] = octal[nb];
	my_revstr(buffer);
	if (buffer[1] == '\0')
		my_putstr("00");
	if (buffer[2] == '\0')
		my_putchar('0');
	my_putstr(buffer);
	return (0);
}

int my_put_hex(int nb)
{
	int i = 0;
	int result;
	char hex[16] = "0123456789ABCDEF";
	char *buffer;

	buffer = malloc(my_strlen(hex));
	while (nb >= 16) {
		result = nb % 16;
		buffer[i] = hex[result];
		nb = nb / 16;
		i = i + 1;
	}
	buffer[i] = hex[nb];
	my_revstr(buffer);
	my_putstr(buffer);
	return (0);
}

int my_put_lowerhex(int nb)
{
	int i = 0;
	int result;
	char hex[16] = "0123456789abcdef";
	char *buffer;

	buffer = malloc(my_strlen(hex));
	while (nb > 16) {
		result = nb % 16;
		buffer[i] = hex[result];
		nb = nb / 16;
		i = i + 1;
	}
	buffer[i] = hex[nb];
	my_revstr(buffer);
	my_putstr(buffer);
	return (0);
}

int my_put_adr(unsigned long int nb)
{
	int i = 0;
	int result;
	char hex[16] = "0123456789abcdef";
	char *buffer;

	buffer = malloc(my_strlen(hex));
	while (nb > 16) {
		result = nb % 16;
		buffer[i] = hex[result];
		nb = nb / 16;
		i = i + 1;
	}
	buffer[i] = hex[nb];
	my_revstr(buffer);
	my_putstr(buffer);
	return (0);
}

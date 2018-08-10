/*
** EPITECH PROJECT, 2017
** Bootstrap my_printf
** File description:
** my.h
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int my_strlen(char const *str);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char *src);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_special_str(char const *str);
int my_put_nbr(int nb);
int my_put_unsigned_int(unsigned int nb);
int my_put_long(long nb);
int my_put_long_long(long long nb);
int my_put_hex(int nb);
int my_put_lowerhex(int nb);
int my_put_octal(int nb);
int my_put_binary(int nb);
int my_put_adr(unsigned long int nb);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, va_list ap);
int my_printf(char const *format, ...);

#endif

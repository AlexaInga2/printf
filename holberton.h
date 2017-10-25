#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct convert - the structure used to convert types for printing
 * @s: whats to be converted
 * @print: the function to print
 * Description: the structure to determine what to print and how
 */
typedef struct convert
{
	char *s;
	int (*print)(va_list);
} convert_t;

int _printf(const char *format, ...);
int p_percent(va_list ap);
int p_str(va_list ap);
int p_char(va_list ap);
int _putchar(char c);
int print_int(va_list i);
int print_dec(va_list d);
int conv_binary(va_list b);

#endif /* _HOLBERTON_H_ */

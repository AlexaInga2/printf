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
	int *(*print)(va_list, int *);
} convert_t;

int _printf(const char *format, ...);
int *p_nchar(char c, int *sum);
int *p_percent(int *sum);
int *p_str(va_list ap, int *sum);
int *p_char(va_list ap, int *sum);
int _putchar(char c);
int print_int(va_list i);
int print_dec(va_list d);
#endif /* _HOLBERTON_H_ */

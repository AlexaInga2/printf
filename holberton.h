#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_


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

#endif /* _HOLBERTON_H_ */

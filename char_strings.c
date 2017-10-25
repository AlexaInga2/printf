#include "holberton.h"

/**
 * p_percent - prints a % sign
 * @sum: sum of chars printed
 * Return: The current sum
 */
int p_percent(va_list ap)
{
	(void) ap;
	_putchar('%');
	return(1);
}

/**
 * p_char - prints a char
 * @ap: list of chars to be printed
 * @sum: the sum of chars printed
 * Return: Current sum of chars printed
 */
int p_char(va_list ap)
{
	char c = (char)va_arg(ap, int);

	_putchar(c);
	return (1);
}

/**
 * p_str - prints a string
 * @ap: list to be printed
 * @sum: the sum of chars printed
 * Return: current sum of chars printed
 */
int p_str(va_list ap)
{
	int i, sum = 0;
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
		sum++;
	}
	return (sum);
}

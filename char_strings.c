#include "holberton.h"

/**
 * p_nchar - prints a char
 * @c: char to be printed
 * @sum: sum of chars printed
 * Return: the number of characters to be printed
 */
int *p_nchar(char c, int *sum)
{
	_putchar(c);
	*sum += 1;
	return (sum);
}

/**
 * p_percent - prints a % sign
 * @sum: sum of chars printed
 * Return: The current sum
 */
int *p_percent(int *sum)
{
	return (p_nchar('%', sum));
}

/**
 * p_char - prints a char
 * @ap: list of chars to be printed
 * @sum: the sum of chars printed
 * Return: Current sum of chars printed
 */
int *p_char(va_list ap, int *sum)
{
	char c = (char)va_arg(ap, int);

	_putchar(c);
	*sum += 1;
	return (sum);
}

/**
 * p_str - prints a string
 * @ap: list to be printed
 * @sum: the sum of chars printed
 * Return: current sum of chars printed
 */
int *p_str(va_list ap, int *sum)
{
	int i;
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0' && s [i + 1] != '\0'; i++)
	{
		_putchar(s[i]);
		*sum += 1;
	}
	return (sum);
}

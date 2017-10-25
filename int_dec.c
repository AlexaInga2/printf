#include "holberton.h"

/**
 * p_num - prints numbers digit by digit
 * @ap: arguments to be printed
 * Return: number of characters printed
 */
int p_num(int n)
{
	int total = 0;
	unsigned int len;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		len = -n;
		total++;
	}
	else
		len = n;
	if (len / 10)
		len += p_num(len / 10);
	_putchar(len % 10 + '0');
	return (total + 1);
}

/**
 * p_int - prints an integer
 * @ap: list of arguments to be printed
 * Return: Number of characters printed
 */
int p_int(va_list ap)
{
	int nlength = va_arg(ap, int); 

	return (p_num(nlength));
}

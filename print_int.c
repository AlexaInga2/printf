#include "holberton.h"
/**
 * print_int - print an integer
 * @i: interger to print
 *
 * Return: sum of intergers printed (chars & digits)
 */
int print_int(va_list i)
{
	int a[10];
	int max, num, sum, count, index;

/* translate i to actual arg value */
	num = va_arg(i, int);
	count = 0;
	max = 1000000000; /* int is in base 10 */
	a[0] = num/max;

	for (index = 1; index < 10; index++)
	{
/* approaching like fizzbuzz */
		max = max / 10;
		a[index] = (num / max) % 10;
	}
/* check if negative */
	if (num < 0)
	{
		_putchar('-');
		count++;
		for (index = 0; index < 10; index++)
			a[index] = a[index] * -1;
	}
	for (index = 0, sum = 0; index < 10; index++)
		sum = sum + a[index];
	if (sum != 0 || index = 9)
	{
		_putchar('0' + a[index]);
		count++;
	}
	return (count);
}

/**
 * print_dec - print decimal
 * @d: decimal to print
 *
 * Return:
 */
int print_dec(va_list d)
{
	int a[10];
	int max, num, sum, count, index;

	num = va_arg(d, int);
	count = 0;
	max = 1000000000;
	a[0] = num / max;
	for (index = 1; index < 10; index++)
	{
		max = max / 10;
		a[index] = (num / max) % 10;
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		for (index = 0; index < 10; index++)
			a[index] = a[index] * -1;
	}
	for (index = 0, sum = 0; index < 10; index++)
	{
		sum = sum + a[index];
		if (sum != 0 || index ==9)
		{
			_putchar('0' + a[index]);
			count++;
		}
	}
	return (count);
}

#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_int - print an integer
 * @i: interger to print
 * @sum: count of the chars printed
 * Return: sum of intergers printed (chars & digits)
 */
int *print_int(va_list i, int *sum)
{
	int a[10];
	int max, num, total, index;

  /* translate i to actual arg value */
	num = va_arg(i, int);
	max = 1000000000; /* int is in base 10 */
	a[0] = num / max;

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
		*sum += 1;
		for (index = 0; index < 10; index++)
			a[index] = a[index] * -1;
	}
	for (index = 0, total = 0; index < 10; index++)
	{
		total = total + a[index];

		if (total != 0 || index == 9)
		{
			_putchar('0' + a[index]);
			*sum += 1;
		}
	}
	return (sum);
}

/**
 * print_dec - print decimal
 * @d: decimal to print
 * @sum: count of chars printed
 * Return: the sum of printed dec
 */
int *print_dec(va_list d, int *sum)
{
	int a[10];
	int max, num, total, index;

	num = va_arg(d, int);
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
		*sum += 1;
		for (index = 0; index < 10; index++)
			a[index] = a[index] * -1;
	}
	for (index = 0, total = 0; index < 10; index++)
	{
		total = total + a[index];
		if (total != 0 || index == 9)
		{
			_putchar('0' + a[index]);
			*sum += 1;
		}
	}
	return (sum);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * conv_binary - convert unsigned int arg to binary
 * @b: unsigned int to be print and be converted
 * @sum: sum of unsigned printed int
 *
 * Return: the number of bytes printed
 */
int *conv_binary(va_list b, int *sum)
{
	unsigned int num, max, index, total;
	unsigned int a[32];

	num = va_arg(b, unsigned int);
	max = 2147483648; /* 2 ^ 32-1 (binary is in base 2 and int value = 32 */
	a[0] = num / max;

	for (index = 1; index < 32; index++)
	{
		max = max / 2;
		a[index] = (num / max) % 2;
	}
	for (index = 0, total = 0, sum = 0; index < 32; index++)
	{
		total = total + a[index];
		if (total || index == 31)
		{
			_putchar('0' + a[index]);
			sum++;
		}
	}
	return (sum);
}
/* 32nd bit remains in our 4 byte/ 32 bit represents if # is + or _ */

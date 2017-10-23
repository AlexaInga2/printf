#include "holberton.h"
#include <stdio.h>
/**
 * _putchar - writes chars c to standard output stream
 * @c: char to print
 *
 * Return: if succesfull, 1 will be returned, else -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

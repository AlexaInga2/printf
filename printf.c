#include "holberton.h"

/**
 * _printf - Custom implementation of printf by Jacob Biehler & Alexa Inga
 * @format: the formatted string to be printed
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	convert_t func[] = {
		{"c", p_char},
		{"s", p_str},
		{"i", print_int},
		{"d", print_dec},
		{"%", p_percent},
		{NULL, NULL}
	};
	int j, index, printed = 0;
	va_list ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (j = 0; format[j]; j++)
	{
		if (format[j] == '%')
		{
			if (!format[j + 1])
				return (-1);
			for (index = 0; func[index].s; index++)
			{
				if (format[j + 1] == *(func[index].s))
				{
					printed += func[index].print(ap), j += 2;
					break;
				}
			}
			if (!func[index].s)
			{
				_putchar(format[j]), printed++;
				_putchar(format[j]), printed++;
			}
		}
		else
			_putchar(format[j]), printed++;
	}
	va_end(ap);
	return (printed);
}

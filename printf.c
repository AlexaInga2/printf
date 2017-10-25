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
		{"b", conv_binary},
		{"%", p_percent},
		{NULL, NULL}
	};
	int i = 0, index = 0, printed = 0;
	va_list ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			while (func[index].s)
			{
				if (format[i + 1] == *(func[index].s))
				{
					printed += func[index].print(ap), i += 2;
					break;
				}
				index++;
			}
			if (!func[index].s)
			{
				_putchar(format[i]), i++, printed++;
				_putchar(format[i]), i++, printed++;
			}
		}
		else
			_putchar(format[i]), i++, printed++;
	}
	va_end(ap);
	return (printed);
}

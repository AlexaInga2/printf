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
	{NULL, NULL}
	};
	int j, index, printed;
	int *sum = 0;
	va_list ap;

	if (format == NULL)
		return (-1);
	sum = malloc(sizeof(int));
	if (sum == NULL)
		return (0);
	va_start(ap, format);
	for (j = 0; format[j]; j++)
	{
		if (format[j] == '%')
		{
			if (!format[j + 1])
				return (-1);
			for (index = 0; func[index].s != NULL; index++)
			{
				if (format[j + 1] == *(func[index].s))
					sum = func[index].print(ap, sum), j++;
			}
			if (format[j + 1] == '%')
			{
				sum = p_percent(sum), j++;
			}
		}
		else
			sum = p_nchar(format[j], sum);
	}
	printed = *sum;
	free(sum);
	va_end(ap);
	return (printed);
}

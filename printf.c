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
	int i, index, printed;
	int *sum;
	va_list ap;

	sum = malloc(sizeof(int));
	if (sum == NULL)
		return (0);
	*sum = 0;
	va_start(ap, format);
	for (i = 0; format [i]; i++)
	{
		if (format[i] == '%')
		{
			for (index = 0; func[index].s != NULL; index++)
			{
				if (*(func[index].s) == format[i + 1])
				{
					sum = func[index].print(ap, sum);
					i++;
				}
			}
			if (format[i + 1] == '%')
			{
				sum = p_percent(sum);
				i++;
			}
		}
		else
			sum = p_nchar(format[i], sum);
	}
	printed = *sum;
	free(sum);
	return (printed);
}

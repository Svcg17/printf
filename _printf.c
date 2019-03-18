#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - produces output according to format
 * @format: format string containing zero or more directives
 *
 * Return: the number of characters printed, excluding null byte
 */
int _printf(const char *format, ...)
{
	data_t types[] = {
		{"c", _printchar},
		{"s", _printstring},
		{"i", _printint},
		{"d", _printint},
		{NULL, NULL}
	};
	int i, j, counter = 0;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			counter += _putchar(format[i]);
		else if (format[i + 1] == '%')
		{
			counter += _putchar('%');
			i++;
		}
		else if (format[i + 1] != 'c' && format[i + 1] != 's'
			 && format[i + 1] != 'i' && format[i + 1] != 'd')
		{
			counter += _putchar('%');
			counter += _putchar(format[i + 1]);
			i++;
		}
		else
		{
			for (j = 0; types[j].type != NULL; j++)
			{
				if (format[i + 1] == *types[j].type)
					counter += types[j].func(ap);
			}
			i++;
		}
	}
	va_end(ap);
	return (counter);
}

#include "holberton.h"
#include <stdarg.h>
int _printf(const char *format, ...)
{
        data_t types[] = {
                {"c", _printchar},
                {"s", _printstring},
		{"i", _printint},
                {"d", _printint},
		{"%", _printchar},
		{NULL, NULL}
        };
	int i;
	int j;
	int counter = 0;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter ++;
		}
		else
		{
			j = 0;
			while (types[j].type != NULL)
			{
				if (format[i + 1] != '\0' &&
				    format[i + 1] == *types[j].type)
					counter += types[j].func(ap);
				j++;
			}
		}
		i++;
	}
	return counter;
	va_end(ap);
}

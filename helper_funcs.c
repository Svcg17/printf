#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printchar(va_list ap)
{
	int counter;
	_putchar(va_arg(ap, int));
	counter++;
	return (counter);
}

int _printstring(va_list ap)
{
	int counter;

	char *s = va_arg(ap, char *);
	while (s != NULL)
	{
		_putchar(s);
		count++;
		s++;
	}
	return (count);
}

int _printint(va_list ap)
{
	int counter;
	int n = va_arg(ap, int);
	if (n < 0)
	{
		_putchar('-');
	}
	if (n / 10 != 0)
	{
		_printint(n / 10);
	}
	putchar(n % 10 + '0');
	counter++;
	return (counter);
}

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
	char c = va_arg(ap, unsigned int);
	_putchar(c);
	return (1);
}

int _printstring(va_list ap)
{
	int counter = 0;

	char *s = va_arg(ap, char *);
	while (s != '\0')
	{
		_putchar(*s);
		counter++;
		s++;
	}
	return (counter);
}

int _printint(va_list ap)
{
	int n = va_arg(ap, int);
	unsigned int u;
	int answer = 0;
	int counter = 0;
	int divisor = 1000000000;
	if (n < 0)
	{
		counter += _putchar('-');
		u = -n;
	}
	while (answer != 0)
	{
		divisor = divisor / 10;
	}
	while(divisor >= 1)
	{
		counter += _putchar(answer);
		answer = u / divisor;
		divisor = divisor / 10;
	}
	return (counter);
}

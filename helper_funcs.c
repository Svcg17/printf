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
/**
 * _printchar - prints a character
 * @ap: The character to print, argument pointer
 *
 * Return: 1
 */
int _printchar(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
 * _printstring - prints a string
 * @ap: The string to print, argument pointer
 *
 * Return: i
 */
int _printstring(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i = 0;

	if (s == NULL)
	s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * _printint - prints an integer
 * @ap: The string to print, argument pointer
 *
 * Return: counter
 */
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
		u = -(n);
	}
	while (answer == 0)
	{
		answer = n / divisor;
		divisor = divisor / 10;
	}
	while (divisor >= 1)
	{
		counter += _putchar(answer);
		answer = u / divisor;
		divisor = divisor / 10;
	}
	return (counter);
}

#include "holberton.h"
/**
 * _rot13 - function that converts a string to rot13
 * @ap: argument pointer to take arguments from.
 * Return: the counter of the string.
 */
int _rot13(va_list ap)
{
	int i, j, counter = 0;
	char *s = va_arg(ap, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				break;
			}
		}
	}
	return (counter);
}

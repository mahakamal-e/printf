#include "main.h"

/**
 * _puts - writes a string to stdout
 * @str: C string to be written
 * Return: successful, non-negative value is returned
 */

int _puts(char *str)
{
	int n = str;

	while (*str != '\0')
	{
		n += _putchar(*str);
		str++;
	}
	return (n);
}
